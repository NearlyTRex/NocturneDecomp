# Local imports
import ghidra_fake

# Unit tests run the Ghidra scripts against ghidra_fake, so `import ghidra...`
# resolves before any script is imported. Integration tests drive a real
# Ghidra and never see the fake.
ghidra_fake.install()
