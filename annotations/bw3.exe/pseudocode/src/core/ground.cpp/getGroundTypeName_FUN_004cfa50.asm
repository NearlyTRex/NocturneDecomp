; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_ground_cpp_getGroundTypeName_FUN_004cfa50(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_DEFAULT_005c4944
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfa50
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004cfa50
    DEC EAX                             ; 004cfa54
    CMP EAX,0xd                         ; 004cfa55
    JA 0x004cfaaf                       ; 004cfa58
        ;   XREF to: 004cfaaf (CONDITIONAL_JUMP)  ; LAB_004cfaaf
    JMP dword ptr [EAX*0x4 + 0x4cfa0c]  ; 004cfa5a
    MOV EAX,0x5c4944                    ; 004cfaaf | = "DEFAULT"
        ;   Label: LAB_004cfaaf
    RET                                 ; 004cfab4

