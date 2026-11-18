# One disassembled instruction as verify_sibling_signatures._function_insns lists them:
# (address, mnemonic, operands); the address is 0 where a test does not care
def insn(mnemonic, ops = ""):
    return (0, mnemonic, ops)
