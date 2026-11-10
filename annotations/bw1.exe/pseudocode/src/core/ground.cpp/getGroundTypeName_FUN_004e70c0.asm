; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_ground_cpp_getGroundTypeName_FUN_004e70c0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_DEFAULT_005e4320
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e70c0
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004e70c0
    DEC EAX                             ; 004e70c4
    CMP EAX,0xd                         ; 004e70c5
    JA 0x004e711f                       ; 004e70c8
        ;   XREF to: 004e711f (CONDITIONAL_JUMP)  ; LAB_004e711f
    JMP dword ptr [EAX*0x4 + 0x4e707c]  ; 004e70ca
    MOV EAX,0x5e4320                    ; 004e711f | = "DEFAULT"
        ;   Label: LAB_004e711f
    RET                                 ; 004e7124

