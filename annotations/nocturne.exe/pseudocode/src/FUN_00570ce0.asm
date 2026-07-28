; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00570ce0(char *param_1,char *param_2,ulong param_3)
;
;
; XREF[1]:
;   crt_string.c_mbstrncpy_FUN_0056db80 at 0056dba0
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570ce0
        ;   Label: FUN_00570ce0
    PUSH ESI                            ; 00570ce1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00570ce2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00570ce6
    MOV EBX,dword ptr [ESP + 0x14]      ; 00570cea
    MOV EDX,ESI                         ; 00570cee
    TEST EBX,EBX                        ; 00570cf0
    JBE 0x00570d05                      ; 00570cf2
        ;   XREF to: 00570d05 (CONDITIONAL_JUMP)  ; LAB_00570d05
    CMP byte ptr [EAX],0x0              ; 00570cf4
        ;   Label: LAB_00570cf4
    JZ 0x00570d05                       ; 00570cf7
        ;   XREF to: 00570d05 (CONDITIONAL_JUMP)  ; LAB_00570d05
    INC EDX                             ; 00570cf9
    MOV CL,byte ptr [EAX]               ; 00570cfa
    INC EAX                             ; 00570cfc
    DEC EBX                             ; 00570cfd
    MOV byte ptr [EDX + -0x1],CL        ; 00570cfe
    TEST EBX,EBX                        ; 00570d01
    JA 0x00570cf4                       ; 00570d03
        ;   XREF to: 00570cf4 (CONDITIONAL_JUMP)  ; LAB_00570cf4
    CMP byte ptr [EAX],0x0              ; 00570d05
        ;   Label: LAB_00570d05
    JZ 0x00570d32                       ; 00570d08
        ;   XREF to: 00570d32 (CONDITIONAL_JUMP)  ; LAB_00570d32
    CMP EDX,ESI                         ; 00570d0a
    JBE 0x00570d32                      ; 00570d0c
        ;   XREF to: 00570d32 (CONDITIONAL_JUMP)  ; LAB_00570d32
    CMP dword ptr [0x02de5c30],0x0      ; 00570d0e | DAT_02de5c30
    JZ 0x00570d32                       ; 00570d15
        ;   XREF to: 00570d32 (CONDITIONAL_JUMP)  ; LAB_00570d32
    MOV AL,byte ptr [EAX + -0x1]        ; 00570d17
    AND EAX,0xff                        ; 00570d1a
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 00570d1f
    AND AL,0x1                          ; 00570d25
    AND EAX,0xff                        ; 00570d27
    JZ 0x00570d32                       ; 00570d2c
        ;   XREF to: 00570d32 (CONDITIONAL_JUMP)  ; LAB_00570d32
    MOV byte ptr [EDX + -0x1],0x0       ; 00570d2e
    TEST EBX,EBX                        ; 00570d32
        ;   Label: LAB_00570d32
    JBE 0x00570d42                      ; 00570d34
        ;   XREF to: 00570d42 (CONDITIONAL_JUMP)  ; LAB_00570d42
    PUSH EBX                            ; 00570d36
    PUSH 0x0                            ; 00570d37
    PUSH EDX                            ; 00570d39
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00570d3a
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00570d3f
    MOV EAX,ESI                         ; 00570d42
        ;   Label: LAB_00570d42
    POP ESI                             ; 00570d44
    POP EBX                             ; 00570d45
    RET                                 ; 00570d46

