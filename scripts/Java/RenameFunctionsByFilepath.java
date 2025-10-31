// Rename functions based on file path strings found within them
//@author NearlyTRex
//@category Annotations
//@keybinding
//@menupath File.Annotations.Rename Functions By Filepath
//@toolbar

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.*;
import ghidra.util.exception.InvalidInputException;
import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class RenameFunctionsByFilepath extends GhidraScript {

    private static final Pattern FILE_PATTERN =
        Pattern.compile("\\\\([^\\\\]+)\\\\([^\\\\]+\\.(?:cxx|cpp|cc|c|hpp|h))", Pattern.CASE_INSENSITIVE);

    @Override
    public void run() throws Exception {

        // Start renaming functions
        println("Starting function renaming based on file path strings...");
        int functionsRenamed = 0;
        FunctionManager funcMgr = currentProgram.getFunctionManager();

        // Iterate through all functions
        FunctionIterator functions = funcMgr.getFunctions(true);
        while (functions.hasNext() && !monitor.isCancelled()) {
            Function function = functions.next();

            // Skip external functions
            if (function.isExternal()) {
                continue;
            }

            // Get filepath
            String filePath = findFilePathInFunction(function);
            if (filePath != null) {
                String newName = generateNewFunctionName(function, filePath);
                if (renameFunction(function, newName)) {
                    functionsRenamed++;
                    println("Function at " + function.getEntryPoint() + " renamed to '" + newName + "'");
                }
            }
        }
        println("Analysis complete. Renamed " + functionsRenamed + " functions.");
    }

    private String findFilePathInFunction(Function function) {

        // Search through all data in the function body
        AddressSetView body = function.getBody();
        for (AddressRange range : body.getAddressRanges()) {
            Address addr = range.getMinAddress();
            while (addr != null && addr.compareTo(range.getMaxAddress()) <= 0 && !monitor.isCancelled()) {

                // Check for string data at this address
                Data data = currentProgram.getListing().getDataAt(addr);
                if (data != null) {
                    String stringValue = getStringValue(data);
                    if (stringValue != null) {
                        String filePath = extractFilePath(stringValue);
                        if (filePath != null) {
                            return filePath;
                        }
                    }
                }

                // Also check for string references from instructions
                Reference[] refs = currentProgram.getReferenceManager().getReferencesFrom(addr);
                for (Reference ref : refs) {
                    Address toAddr = ref.getToAddress();
                    Data refData = currentProgram.getListing().getDataAt(toAddr);
                    if (refData != null) {
                        String stringValue = getStringValue(refData);
                        if (stringValue != null) {
                            String filePath = extractFilePath(stringValue);
                            if (filePath != null) {
                                return filePath;
                            }
                        }
                    }
                }

                // Next address
                try {
                    addr = addr.next();
                } catch (AddressOutOfBoundsException e) {
                    break;
                }
            }
        }
        return null;
    }

    private String getStringValue(Data data) {

        // Check data
        if (data == null) {
            return null;
        }

        // Get data type
        DataType dataType = data.getDataType();

        // Check for various string types
        if (dataType instanceof StringDataType ||
            dataType instanceof TerminatedStringDataType ||
            dataType instanceof UnicodeDataType ||
            dataType.getName().toLowerCase().contains("string")) {
            Object value = data.getValue();
            if (value instanceof String) {
                return (String) value;
            }
        }

        // Also check if it's a pointer to a string
        if (dataType instanceof Pointer) {
            Reference ref = data.getPrimaryReference(0);
            if (ref != null) {
                Data refData = currentProgram.getListing().getDataAt(ref.getToAddress());
                if (refData != null) {
                    return getStringValue(refData);
                }
            }
        }
        return null;
    }

    private String extractFilePath(String input) {
        Matcher matcher = FILE_PATTERN.matcher(input);
        if (matcher.find()) {
            String folder = matcher.group(1);
            String fileName = matcher.group(2);
            return folder + "_" + fileName;
        }
        return null;
    }

    private String generateNewFunctionName(Function function, String filePath) {

        // Clean up the file path for use in function name
        String cleanPrefix = filePath.replace("\\", "_")
                                  .replace("/", "_")
                                  .replace("-", "_")
                                  .replace(" ", "_");

        // Remove multiple underscores
        cleanPrefix = cleanPrefix.replaceAll("_+", "_");

        // Remove leading/trailing underscores
        cleanPrefix = cleanPrefix.replaceAll("^_+|_+$", "");

        // Ensure it starts with a letter or underscore (valid identifier)
        if (!cleanPrefix.matches("^[a-zA-Z_].*")) {
            cleanPrefix = "_" + cleanPrefix;
        }

        // Avoid prepending if already renamed
        String originalName = function.getName();
        if (originalName.startsWith(cleanPrefix + "_")) {
            return originalName;
        }

        // Always prepend the file path to the existing function name
        String newName = cleanPrefix + "_" + originalName;

        // Ensure the name isn't too long (Ghidra has limits)
        if (newName.length() > 100) {
            newName = newName.substring(0, 97) + "...";
        }
        return newName;
    }

    private boolean renameFunction(Function function, String newName) {
        try {

            // Check if a symbol with this name already exists
            SymbolTable symbolTable = currentProgram.getSymbolTable();
            Symbol existingSymbol = symbolTable.getGlobalSymbol(newName, function.getEntryPoint());
            if (existingSymbol != null && !existingSymbol.equals(function.getSymbol())) {

                // Append a number to make it unique
                int counter = 1;
                String uniqueName = newName;
                while (symbolTable.getGlobalSymbol(uniqueName, null) != null) {
                    uniqueName = newName + "_" + counter;
                    counter++;
                }
                newName = uniqueName;
            }

            // Rename function
            function.setName(newName, SourceType.USER_DEFINED);
            return true;
        } catch (Exception e) {
            println("Failed to rename function at " + function.getEntryPoint() + " to '" + newName + "': " + e.getMessage());
            return false;
        }
    }
}
