; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0056f544(uint param_1,char *param_2,int param_3)
;
;
; Called Functions:
;   crt_stdlib.c_utoa_FUN_0056f4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f544
        ;   Label: FUN_0056f544
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056f545
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f549
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056f54d
    MOV EDX,EBX                         ; 0056f551
    CMP ECX,0xa                         ; 0056f553
    JNZ 0x0056f564                      ; 0056f556
        ;   XREF to: 0056f564 (CONDITIONAL_JUMP)  ; LAB_0056f564
    TEST EAX,EAX                        ; 0056f558
    JGE 0x0056f564                      ; 0056f55a
        ;   XREF to: 0056f564 (CONDITIONAL_JUMP)  ; LAB_0056f564
    NEG EAX                             ; 0056f55c
    LEA EDX,[EBX + 0x1]                 ; 0056f55e
    MOV byte ptr [EBX],0x2d             ; 0056f561
    PUSH ECX                            ; 0056f564
        ;   Label: LAB_0056f564
    PUSH EDX                            ; 0056f565
    PUSH EAX                            ; 0056f566
    CALL crt_stdlib.c_utoa_FUN_0056f4f0 ; 0056f567
        ;   XREF to: 0056f4f0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_utoa_FUN_0056f4f0(uint value, char * buffer, int base)
    ADD ESP,0xc                         ; 0056f56c
    MOV EAX,EBX                         ; 0056f56f
    POP EBX                             ; 0056f571
    RET                                 ; 0056f572

