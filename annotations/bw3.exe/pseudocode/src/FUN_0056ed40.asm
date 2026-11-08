; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056ed40(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056ed40
        ;   Label: FUN_0056ed40
    CMP dword ptr [EAX + 0x174],0x3     ; 0056ed44
    JZ 0x0056ed53                       ; 0056ed4b
        ;   XREF to: 0056ed53 (CONDITIONAL_JUMP)  ; LAB_0056ed53
    MOV EAX,0x1                         ; 0056ed4d
    RET                                 ; 0056ed52
    MOV dword ptr [EAX + 0x2f0],0x1     ; 0056ed53
        ;   Label: LAB_0056ed53
    MOV EAX,0x1                         ; 0056ed5d
    RET                                 ; 0056ed62

