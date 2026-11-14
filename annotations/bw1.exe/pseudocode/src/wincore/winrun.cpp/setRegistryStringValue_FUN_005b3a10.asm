; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005b3a10(char *key_path,char *value_name,char *value_data)
;
; Parameters:
; char *           Stack[0x4]:4   key_path
; char *           Stack[0x8]:4   value_name
; char *           Stack[0xc]:4   value_data
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 005039a2
;
; Referenced Globals:
;   void* PTR_RegCloseKey_005d03e8 = 001d077e
;   void* PTR_RegCreateKeyExA_005d03ec = 001d078c
;   void* PTR_RegSetValueExA_005d03f8 = 001d07c2
;   undefined4 DAT_005f9e98
;
; Called Functions:
;   RegCloseKey
;   RegCreateKeyExA
;   RegSetValueExA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3a10
        ;   Label: wincore_winrun.cpp_setRegistryStringValue_FUN_005b3a10
    SUB ESP,0x8                         ; 005b3a11
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b3a14
    LEA EAX,[ESP + 0x4]                 ; 005b3a18
    PUSH EAX                            ; 005b3a1c
    LEA EAX,[ESP + 0x4]                 ; 005b3a1d
    PUSH EAX                            ; 005b3a21
    PUSH 0x0                            ; 005b3a22
    PUSH 0x20006                        ; 005b3a24
    PUSH 0x0                            ; 005b3a29
    PUSH 0x5f9e98                       ; 005b3a2b | DAT_005f9e98
    PUSH 0x0                            ; 005b3a30
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005b3a32
    PUSH EDX                            ; 005b3a36
    PUSH 0x80000002                     ; 005b3a37
    CALL dword ptr CS:[0x5d03ec]        ; 005b3a3c | PTR_RegCreateKeyExA_005d03ec
    TEST EAX,EAX                        ; 005b3a43
    JZ 0x005b3a4c                       ; 005b3a45
        ;   XREF to: 005b3a4c (CONDITIONAL_JUMP)  ; LAB_005b3a4c
    ADD ESP,0x8                         ; 005b3a47
    POP EBX                             ; 005b3a4a
    RET                                 ; 005b3a4b
    PUSH EDI                            ; 005b3a4c
        ;   Label: LAB_005b3a4c
    PUSH ESI                            ; 005b3a4d
    MOV EDI,EBX                         ; 005b3a4e
    SUB ECX,ECX                         ; 005b3a50
    DEC ECX                             ; 005b3a52
    XOR EAX,EAX                         ; 005b3a53
    SCASB.REPNE ES:EDI                  ; 005b3a55
    NOT ECX                             ; 005b3a57
    DEC ECX                             ; 005b3a59
    INC ECX                             ; 005b3a5a
    PUSH ECX                            ; 005b3a5b
    PUSH EBX                            ; 005b3a5c
    PUSH 0x1                            ; 005b3a5d
    PUSH 0x0                            ; 005b3a5f
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005b3a61
    PUSH ECX                            ; 005b3a65
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b3a66
    PUSH EBX                            ; 005b3a6a
    CALL dword ptr CS:[0x5d03f8]        ; 005b3a6b | PTR_RegSetValueExA_005d03f8
    MOV ESI,dword ptr [ESP + 0x8]       ; 005b3a72
    PUSH ESI                            ; 005b3a76
    CALL dword ptr CS:[0x5d03e8]        ; 005b3a77 | PTR_RegCloseKey_005d03e8
    POP ESI                             ; 005b3a7e
    POP EDI                             ; 005b3a7f
    ADD ESP,0x8                         ; 005b3a80
    POP EBX                             ; 005b3a83
    RET                                 ; 005b3a84

