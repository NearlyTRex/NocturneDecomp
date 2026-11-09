; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_00449ef0(int pixel_count)
;
; Parameters:
; int              Stack[0x4]:4   pixel_count
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70 at 00449f8d
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf217
;   TerminatedCString s_getRestoreMemory_Need_mo_005cf22a
;   undefined4 DAT_01b11db0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00449ef0
        ;   Label: core_dlight.cpp_getRestoreMemory_FUN_00449ef0
    MOV EAX,0x300064                    ; 00449ef1
    SUB EAX,dword ptr [ESP + 0x8]       ; 00449ef6
    MOV ECX,dword ptr [0x01b11db0]      ; 00449efa | DAT_01b11db0
    SUB EAX,0x4                         ; 00449f00
    CMP EAX,ECX                         ; 00449f03
    JC 0x00449f2f                       ; 00449f05
        ;   XREF to: 00449f2f (CONDITIONAL_JUMP)  ; LAB_00449f2f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00449f07
        ;   Label: LAB_00449f07
    MOV EAX,[0x01b11db0]                ; 00449f0b | DAT_01b11db0
    MOV EDI,dword ptr [0x01b11db0]      ; 00449f10 | DAT_01b11db0
    ADD EAX,EAX                         ; 00449f16
    ADD EDX,0x8                         ; 00449f18
    ADD EAX,0x1511ce8                   ; 00449f1b
    ADD EDI,EDX                         ; 00449f20
    ADD EAX,0x10                        ; 00449f22
    MOV dword ptr [0x01b11db0],EDI      ; 00449f25 | DAT_01b11db0
    AND AL,0xf0                         ; 00449f2b
    POP EDI                             ; 00449f2d
    RET                                 ; 00449f2e
    PUSH ESI                            ; 00449f2f
        ;   Label: LAB_00449f2f
    PUSH EBX                            ; 00449f30
    MOV EBX,0x5cf217                    ; 00449f31 | = "..\\core\\dlight.cpp"
    MOV ESI,0xa4                        ; 00449f36
    PUSH 0x5cf22a                       ; 00449f3b | = "getRestoreMemory - Need more static m..."
    MOV dword ptr [0x01d046a0],EBX      ; 00449f40 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00449f46 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00449f4c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00449f51
    POP EBX                             ; 00449f54
    POP ESI                             ; 00449f55
    JMP 0x00449f07                      ; 00449f56
        ;   XREF to: 00449f07 (UNCONDITIONAL_JUMP)  ; LAB_00449f07

