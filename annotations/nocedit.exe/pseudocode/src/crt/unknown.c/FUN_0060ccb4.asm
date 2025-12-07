; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060ccb4()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060ccb4 at 0060cd20
;
; Referenced Globals:
;   ThreadRegistryEntry* g_ThreadDataRegistryList
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ccb4
        ;   Label: crt_unknown.c_FUN_0060ccb4
    PUSH ESI                            ; 0060ccb5
    MOV EBX,dword ptr [0x03f9c160]      ; 0060ccb6 | ThreadRegistryEntry * g_ThreadDataRegistryList
    TEST EBX,EBX                        ; 0060ccbc
    JZ 0x0060cce4                       ; 0060ccbe | LAB_0060cce4
        ;   XREF to: 0060cce4 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060ccc0
        ;   Label: LAB_0060ccc0
    MOV ESI,dword ptr [EBX]             ; 0060ccc3
    TEST EDX,EDX                        ; 0060ccc5
    JZ 0x0060ccd5                       ; 0060ccc7 | LAB_0060ccd5
        ;   XREF to: 0060ccd5 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x8]       ; 0060ccc9
    PUSH ECX                            ; 0060cccc
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060cccd | void crt_memory.c_free_FUN_00601cd0(void * ptr)
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060ccd2
    PUSH EBX                            ; 0060ccd5
        ;   Label: LAB_0060ccd5
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060ccd6 | void crt_memory.c_free_FUN_00601cd0(void * ptr)
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060ccdb
    MOV EBX,ESI                         ; 0060ccde
    TEST ESI,ESI                        ; 0060cce0
    JNZ 0x0060ccc0                      ; 0060cce2 | LAB_0060ccc0
        ;   XREF to: 0060ccc0 (CONDITIONAL_JUMP)
    POP ESI                             ; 0060cce4
        ;   Label: LAB_0060cce4
    POP EBX                             ; 0060cce5
    RET                                 ; 0060cce6

