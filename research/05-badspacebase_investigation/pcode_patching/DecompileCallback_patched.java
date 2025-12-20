/* ###
 * IP: GHIDRA
 * MODIFIED: P-code patch support added
 */
package ghidra.app.decompiler;

import static ghidra.program.model.pcode.AttributeId.*;
import static ghidra.program.model.pcode.ElementId.*;

import java.io.IOException;
import java.math.BigInteger;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.HashMap;
import java.util.Map;
import java.util.List;
import java.util.ArrayList;
import java.util.regex.*;

import ghidra.app.cmd.function.CallDepthChangeInfo;
import ghidra.docking.settings.SettingsImpl;
import ghidra.program.disassemble.Disassembler;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.lang.ConstantPool.Record;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.mem.MemoryBufferImpl;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import ghidra.util.Msg;
import ghidra.util.UndefinedFunction;
import ghidra.util.exception.NotFoundException;
import ghidra.util.exception.UsrException;
import ghidra.util.task.TaskMonitor;

/**
 * Routines that the decompiler invokes to gather info during decompilation.
 * MODIFIED: Added P-code patch support for injecting custom P-code from files.
 */
public class DecompileCallback {

	public final static int MAX_SYMBOL_COUNT = 16;

	// ========== PCODE PATCH SUPPORT ==========

	/**
	 * Directory containing .pcode patch files.
	 * Override with -Dghidra.pcode.patch.dir=/path/to/patches
	 */
	private static final String PCODE_PATCH_DIR = System.getProperty("ghidra.pcode.patch.dir",
		System.getProperty("user.home") + "/.ghidra_pcode_patches/");

	/**
	 * In-memory cache of parsed patches: address string -> PcodeOp[]
	 */
	private static Map<String, PcodeOp[]> pcodePatchCache = new HashMap<>();

	/**
	 * Map opcode names to PcodeOp constants
	 */
	private static final Map<String, Integer> OPCODE_MAP = new HashMap<>();
	static {
		OPCODE_MAP.put("COPY", PcodeOp.COPY);
		OPCODE_MAP.put("LOAD", PcodeOp.LOAD);
		OPCODE_MAP.put("STORE", PcodeOp.STORE);
		OPCODE_MAP.put("BRANCH", PcodeOp.BRANCH);
		OPCODE_MAP.put("CBRANCH", PcodeOp.CBRANCH);
		OPCODE_MAP.put("BRANCHIND", PcodeOp.BRANCHIND);
		OPCODE_MAP.put("CALL", PcodeOp.CALL);
		OPCODE_MAP.put("CALLIND", PcodeOp.CALLIND);
		OPCODE_MAP.put("RETURN", PcodeOp.RETURN);
		OPCODE_MAP.put("INT_EQUAL", PcodeOp.INT_EQUAL);
		OPCODE_MAP.put("INT_NOTEQUAL", PcodeOp.INT_NOTEQUAL);
		OPCODE_MAP.put("INT_SLESS", PcodeOp.INT_SLESS);
		OPCODE_MAP.put("INT_SLESSEQUAL", PcodeOp.INT_SLESSEQUAL);
		OPCODE_MAP.put("INT_LESS", PcodeOp.INT_LESS);
		OPCODE_MAP.put("INT_LESSEQUAL", PcodeOp.INT_LESSEQUAL);
		OPCODE_MAP.put("INT_ZEXT", PcodeOp.INT_ZEXT);
		OPCODE_MAP.put("INT_SEXT", PcodeOp.INT_SEXT);
		OPCODE_MAP.put("INT_ADD", PcodeOp.INT_ADD);
		OPCODE_MAP.put("INT_SUB", PcodeOp.INT_SUB);
		OPCODE_MAP.put("INT_CARRY", PcodeOp.INT_CARRY);
		OPCODE_MAP.put("INT_SCARRY", PcodeOp.INT_SCARRY);
		OPCODE_MAP.put("INT_SBORROW", PcodeOp.INT_SBORROW);
		OPCODE_MAP.put("INT_2COMP", PcodeOp.INT_2COMP);
		OPCODE_MAP.put("INT_NEGATE", PcodeOp.INT_NEGATE);
		OPCODE_MAP.put("INT_XOR", PcodeOp.INT_XOR);
		OPCODE_MAP.put("INT_AND", PcodeOp.INT_AND);
		OPCODE_MAP.put("INT_OR", PcodeOp.INT_OR);
		OPCODE_MAP.put("INT_LEFT", PcodeOp.INT_LEFT);
		OPCODE_MAP.put("INT_RIGHT", PcodeOp.INT_RIGHT);
		OPCODE_MAP.put("INT_SRIGHT", PcodeOp.INT_SRIGHT);
		OPCODE_MAP.put("INT_MULT", PcodeOp.INT_MULT);
		OPCODE_MAP.put("INT_DIV", PcodeOp.INT_DIV);
		OPCODE_MAP.put("INT_SDIV", PcodeOp.INT_SDIV);
		OPCODE_MAP.put("INT_REM", PcodeOp.INT_REM);
		OPCODE_MAP.put("INT_SREM", PcodeOp.INT_SREM);
		OPCODE_MAP.put("BOOL_NEGATE", PcodeOp.BOOL_NEGATE);
		OPCODE_MAP.put("BOOL_XOR", PcodeOp.BOOL_XOR);
		OPCODE_MAP.put("BOOL_AND", PcodeOp.BOOL_AND);
		OPCODE_MAP.put("BOOL_OR", PcodeOp.BOOL_OR);
		OPCODE_MAP.put("SUBPIECE", PcodeOp.SUBPIECE);
	}

	/**
	 * Register P-code patch from script (in-memory, no file)
	 */
	public static void registerPatch(Address addr, PcodeOp[] pcode) {
		pcodePatchCache.put(addr.toString(), pcode);
		Msg.info(DecompileCallback.class, "Registered P-code patch for " + addr);
	}

	/**
	 * Clear a P-code patch
	 */
	public static void clearPatch(Address addr) {
		pcodePatchCache.remove(addr.toString());
	}

	/**
	 * Clear all patches
	 */
	public static void clearAllPatches() {
		pcodePatchCache.clear();
	}

	/**
	 * Reload patches from disk (clears both instruction and function caches)
	 */
	public static void reloadPatches() {
		pcodePatchCache.clear();
		functionPatchCache.clear();
		Msg.info(DecompileCallback.class, "P-code patch cache cleared, will reload from " + PCODE_PATCH_DIR);
	}

	/**
	 * Get the patch directory path
	 */
	public static String getPatchDirectory() {
		return PCODE_PATCH_DIR;
	}

	/**
	 * Check if patches are available for any address
	 */
	public static int getPatchCount() {
		int count = pcodePatchCache.size();
		for (Map<String, PcodeOp[]> funcPatches : functionPatchCache.values()) {
			count += funcPatches.size();
		}
		return count;
	}

	// ========== END PCODE PATCH SUPPORT ==========

	// ... (rest of the original fields) ...
	private DecompileDebug debug;
	private Program program;
	private Listing listing;
	private Function cachedFunction;
	private AddressSet undefinedBody;
	private Address funcEntry;
	private int default_extrapop;
	private Language pcodelanguage;
	private CompilerSpec pcodecompilerspec;
	private AddressFactory addrfactory;
	private ConstantPool cpool;
	private PcodeDataTypeManager dtmanage;
	private String nativeMessage;
	private InstructionBlock lastPseudoInstructionBlock;
	private Disassembler pseudoDisassembler;

	public DecompileCallback(Program prog, Language language, CompilerSpec compilerSpec,
			PcodeDataTypeManager dt) {
		program = prog;
		pcodelanguage = language;
		pcodecompilerspec = compilerSpec;
		listing = program.getListing();
		addrfactory = program.getAddressFactory();
		dtmanage = dt;
		default_extrapop = pcodecompilerspec.getDefaultCallingConvention().getExtrapop();
		cpool = null;
		nativeMessage = null;
		debug = null;
	}

	// ... (setFunction and other methods unchanged) ...

	/**
	 * Generate p-code ops for the instruction at the given address.
	 * MODIFIED: Check for P-code patch first.
	 */
	public void getPcode(Address addr, PatchEncoder resultEncoder) {
		// ========== CHECK FOR PCODE PATCH ==========
		PcodeOp[] patchedPcode = getPcodePatch(addr);
		if (patchedPcode != null) {
			try {
				Instruction instr = getInstruction(addr);
				int fallthru = (instr != null) ? instr.getDefaultFallThroughOffset() : 4;
				encodeInstruction(resultEncoder, addr, patchedPcode, fallthru, 0, addrfactory);
				Msg.info(this, "Applied P-code patch for " + addr + " (" + patchedPcode.length + " ops)");
				return;
			} catch (Exception e) {
				Msg.error(this, "Error encoding patched P-code at " + addr + ": " + e.getMessage());
				// Fall through to normal path
			}
		}
		// ========== END PATCH CHECK ==========

		// Original implementation
		try {
			Instruction instr = getInstruction(addr);
			if (instr == null) {
				return;
			}
			if (undefinedBody != null) {
				undefinedBody.addRange(instr.getMinAddress(), instr.getMaxAddress());
				cachedFunction.setBody(undefinedBody);
			}
			if (debug != null) {
				debug.getPcode(addr, instr);
				FlowOverride fo = instr.getFlowOverride();
				if (fo != FlowOverride.NONE) {
					debug.addFlowOverride(addr, fo);
				}
			}

			instr.getPrototype()
					.getPcodePacked(resultEncoder, instr.getInstructionContext(),
						new InstructionPcodeOverride(instr));
			return;
		}
		catch (UsrException e) {
			Msg.warn(this,
				"Decompiling " + funcEntry + ", pcode error at " + addr + ": " + e.getMessage());
		}
		catch (Exception e) {
			Msg.error(this,
				"Decompiling " + funcEntry + ", pcode error at " + addr + ": " + e.getMessage(), e);
		}
		resultEncoder.clear();
	}

	// ========== PCODE PATCH IMPLEMENTATION ==========

	/**
	 * Cache for function-level patches: maps function entry address to
	 * Map of instruction address -> PcodeOp[]
	 */
	private static Map<String, Map<String, PcodeOp[]>> functionPatchCache = new HashMap<>();

	/**
	 * Check for P-code patch at address. Checks in order:
	 * 1. In-memory cache (instruction-level)
	 * 2. Instruction-level file: <addr>.pcode
	 * 3. Function-level file: func_<entry>.pcode (searches for matching @<addr>)
	 */
	private PcodeOp[] getPcodePatch(Address addr) {
		String addrKey = addr.toString();

		// 1. Check instruction-level memory cache
		if (pcodePatchCache.containsKey(addrKey)) {
			return pcodePatchCache.get(addrKey);
		}

		// 2. Check for instruction-level patch file
		Path instrPatchFile = Paths.get(PCODE_PATCH_DIR, addrKey + ".pcode");
		if (Files.exists(instrPatchFile)) {
			try {
				PcodeOp[] ops = parsePcodeFile(instrPatchFile, addr);
				if (ops != null && ops.length > 0) {
					pcodePatchCache.put(addrKey, ops);
					Msg.info(this, "Loaded instruction P-code patch from " + instrPatchFile);
					return ops;
				}
			} catch (Exception e) {
				Msg.error(this, "Error parsing P-code patch " + instrPatchFile + ": " + e.getMessage());
			}
		}

		// 3. Check for function-level patch files
		// Look for func_*.pcode files and see if any contain this address
		PcodeOp[] funcPatch = checkFunctionPatchFiles(addr);
		if (funcPatch != null) {
			pcodePatchCache.put(addrKey, funcPatch);
			return funcPatch;
		}

		return null;
	}

	/**
	 * Check function-level patch files for patches at the given address.
	 * Function files are named: func_<entry_address>.pcode
	 * Format: @<address> marks the start of P-code for that instruction
	 */
	private PcodeOp[] checkFunctionPatchFiles(Address addr) {
		String addrKey = addr.toString();

		// Check if we've already loaded any function patch files
		for (Map.Entry<String, Map<String, PcodeOp[]>> entry : functionPatchCache.entrySet()) {
			if (entry.getValue().containsKey(addrKey)) {
				return entry.getValue().get(addrKey);
			}
		}

		// Scan for func_*.pcode files
		Path patchDir = Paths.get(PCODE_PATCH_DIR);
		if (!Files.exists(patchDir)) {
			return null;
		}

		try {
			Files.list(patchDir)
				.filter(p -> p.getFileName().toString().startsWith("func_") &&
				             p.getFileName().toString().endsWith(".pcode"))
				.forEach(funcFile -> {
					String funcEntry = funcFile.getFileName().toString()
						.replace("func_", "").replace(".pcode", "");

					if (!functionPatchCache.containsKey(funcEntry)) {
						try {
							Map<String, PcodeOp[]> funcPatches = parseFunctionPcodeFile(funcFile);
							functionPatchCache.put(funcEntry, funcPatches);
							Msg.info(this, "Loaded function P-code patch from " + funcFile +
								" (" + funcPatches.size() + " instructions)");
						} catch (Exception e) {
							Msg.error(this, "Error parsing function P-code file " + funcFile +
								": " + e.getMessage());
						}
					}
				});
		} catch (IOException e) {
			Msg.error(this, "Error scanning patch directory: " + e.getMessage());
		}

		// Check again after loading
		for (Map<String, PcodeOp[]> funcPatches : functionPatchCache.values()) {
			if (funcPatches.containsKey(addrKey)) {
				return funcPatches.get(addrKey);
			}
		}

		return null;
	}

	/**
	 * Parse a function-level P-code file.
	 * Format:
	 *   @<address>  # optional comment
	 *   OPCODE (output) = (input1), (input2)
	 *   OPCODE (output) = (input1)
	 *
	 *   @<next_address>  # next instruction
	 *   ...
	 *
	 * Returns: Map of address string -> PcodeOp[] for that instruction
	 */
	private Map<String, PcodeOp[]> parseFunctionPcodeFile(Path funcFile) throws IOException {
		Map<String, PcodeOp[]> result = new HashMap<>();
		List<String> lines = Files.readAllLines(funcFile);

		String currentAddr = null;
		List<PcodeOp> currentOps = new ArrayList<>();
		int seqNum = 0;

		for (String line : lines) {
			line = line.trim();

			// Skip empty lines and pure comments
			if (line.isEmpty()) {
				continue;
			}
			if (line.startsWith("#") && !line.startsWith("#@")) {
				continue;
			}

			// Check for address marker: @<address> or #@<address>
			if (line.startsWith("@") || line.startsWith("#@")) {
				// Save previous instruction's P-code
				if (currentAddr != null && !currentOps.isEmpty()) {
					result.put(currentAddr, currentOps.toArray(new PcodeOp[0]));
				}

				// Parse new address
				String addrPart = line.startsWith("#@") ? line.substring(2) : line.substring(1);
				// Remove any trailing comment
				int commentIdx = addrPart.indexOf('#');
				if (commentIdx > 0) {
					addrPart = addrPart.substring(0, commentIdx);
				}
				currentAddr = addrPart.trim();
				currentOps = new ArrayList<>();
				seqNum = 0;
				continue;
			}

			// Parse P-code line if we have a current address
			if (currentAddr != null && !line.startsWith("#")) {
				try {
					Address addr = addrfactory.getDefaultAddressSpace().getAddress(currentAddr);
					PcodeOp op = parsePcodeLine(line, addr, seqNum++);
					if (op != null) {
						currentOps.add(op);
					}
				} catch (Exception e) {
					// Skip unparseable address
				}
			}
		}

		// Save last instruction's P-code
		if (currentAddr != null && !currentOps.isEmpty()) {
			result.put(currentAddr, currentOps.toArray(new PcodeOp[0]));
		}

		return result;
	}

	/**
	 * Parse P-code patch file (instruction-level).
	 *
	 * Format:
	 *   # Comment lines start with #
	 *   # Blank lines ignored
	 *
	 *   # Format: OPCODE output = input1, input2
	 *   # Varnodes: (space,offset,size) where offset/size are hex
	 *
	 *   # Example: mov eax, [ebp-8]
	 *   INT_ADD (unique,0x1000,4) = (register,0x14,4), (const,0xfffffff8,4)
	 *   LOAD (register,0x0,4) = (const,0x1b1,4), (unique,0x1000,4)
	 *
	 *   # Spaces: register, const, unique, ram, stack
	 *   # Register offsets (x86): EAX=0x0, ECX=0x4, EDX=0x8, EBX=0xc, ESP=0x10, EBP=0x14, ESI=0x18, EDI=0x1c
	 */
	private PcodeOp[] parsePcodeFile(Path patchFile, Address addr) throws IOException {
		List<String> lines = Files.readAllLines(patchFile);
		List<PcodeOp> ops = new ArrayList<>();
		int seqNum = 0;

		for (String line : lines) {
			line = line.trim();
			if (line.isEmpty() || line.startsWith("#")) {
				continue;
			}

			PcodeOp op = parsePcodeLine(line, addr, seqNum++);
			if (op != null) {
				ops.add(op);
			}
		}

		return ops.toArray(new PcodeOp[0]);
	}

	// Pattern for parsing: OPCODE (space,off,size) = (space,off,size), (space,off,size)
	private static final Pattern VARNODE_PATTERN = Pattern.compile(
		"\\(\\s*(\\w+)\\s*,\\s*(0x[0-9a-fA-F]+|\\d+)\\s*,\\s*(\\d+)\\s*\\)");

	/**
	 * Parse single P-code line
	 */
	private PcodeOp parsePcodeLine(String line, Address addr, int seqNum) {
		try {
			// Split on '=' to separate output from inputs
			String[] parts = line.split("=", 2);

			String leftSide = parts[0].trim();
			String rightSide = (parts.length > 1) ? parts[1].trim() : "";

			// Parse opcode (first word on left side)
			int spaceIdx = leftSide.indexOf(' ');
			String opcodeName;
			String outputStr;

			if (spaceIdx > 0) {
				opcodeName = leftSide.substring(0, spaceIdx).trim();
				outputStr = leftSide.substring(spaceIdx + 1).trim();
			} else {
				opcodeName = leftSide;
				outputStr = "";
			}

			Integer opcodeInt = OPCODE_MAP.get(opcodeName.toUpperCase());
			if (opcodeInt == null) {
				Msg.warn(this, "Unknown opcode: " + opcodeName);
				return null;
			}

			// Parse output varnode (if present)
			Varnode output = null;
			if (!outputStr.isEmpty()) {
				output = parseVarnode(outputStr);
			}

			// Parse input varnodes
			List<Varnode> inputs = new ArrayList<>();
			if (!rightSide.isEmpty()) {
				Matcher m = VARNODE_PATTERN.matcher(rightSide);
				while (m.find()) {
					Varnode v = parseVarnodeMatch(m);
					if (v != null) {
						inputs.add(v);
					}
				}
			}

			// Create PcodeOp
			return new PcodeOp(addr, seqNum, opcodeInt,
				inputs.toArray(new Varnode[0]), output);

		} catch (Exception e) {
			Msg.error(this, "Error parsing P-code line '" + line + "': " + e.getMessage());
			return null;
		}
	}

	/**
	 * Parse a varnode from string like "(register,0x14,4)"
	 */
	private Varnode parseVarnode(String str) {
		Matcher m = VARNODE_PATTERN.matcher(str);
		if (m.find()) {
			return parseVarnodeMatch(m);
		}
		return null;
	}

	/**
	 * Parse varnode from regex match
	 */
	private Varnode parseVarnodeMatch(Matcher m) {
		String spaceName = m.group(1).toLowerCase();
		String offsetStr = m.group(2);
		int size = Integer.parseInt(m.group(3));

		long offset;
		if (offsetStr.startsWith("0x") || offsetStr.startsWith("0X")) {
			offset = Long.parseUnsignedLong(offsetStr.substring(2), 16);
		} else {
			offset = Long.parseLong(offsetStr);
		}

		AddressSpace space = getAddressSpace(spaceName);
		if (space == null) {
			Msg.warn(this, "Unknown address space: " + spaceName);
			return null;
		}

		Address address = space.getAddress(offset);
		return new Varnode(address, size);
	}

	/**
	 * Get AddressSpace by name
	 */
	private AddressSpace getAddressSpace(String name) {
		// Handle common space names
		switch (name.toLowerCase()) {
			case "register":
				return addrfactory.getRegisterSpace();
			case "const":
			case "constant":
				return addrfactory.getConstantSpace();
			case "unique":
				return addrfactory.getUniqueSpace();
			case "ram":
			case "mem":
				return addrfactory.getDefaultAddressSpace();
			case "stack":
				return addrfactory.getStackSpace();
			default:
				return addrfactory.getAddressSpace(name);
		}
	}

	// ========== END PCODE PATCH IMPLEMENTATION ==========

	// ... (rest of original methods unchanged) ...

	/**
	 * Encode a list of pcode to stream (unchanged from original)
	 */
	public static void encodeInstruction(Encoder encoder, Address addr, PcodeOp[] ops,
			int fallthruoffset, int paramshift, AddressFactory addrFactory) throws IOException {
		if ((ops.length == 1) && (ops[0].getOpcode() == PcodeOp.UNIMPLEMENTED)) {
			encoder.openElement(ELEM_UNIMPL);
			encoder.writeSignedInteger(ATTRIB_OFFSET, fallthruoffset);
			encoder.closeElement(ELEM_UNIMPL);
			return;
		}
		encoder.openElement(ELEM_INST);
		encoder.writeSignedInteger(ATTRIB_OFFSET, fallthruoffset);
		if (paramshift != 0) {
			encoder.writeSignedInteger(ATTRIB_PARAMSHIFT, paramshift);
		}
		AddressXML.encode(encoder, addr);
		for (PcodeOp op : ops) {
			op.encodeRaw(encoder, addrFactory);
		}
		encoder.closeElement(ELEM_INST);
	}
}
