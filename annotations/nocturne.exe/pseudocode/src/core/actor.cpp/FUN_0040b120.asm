; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040b120(void)
;
;
; Referenced Globals:
;   string s_..\\core\\actor.cpp_00577747
;   string s_CDemonActor::processActionButton_00577759
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577747                    ; 0040b120 | = "..\\core\\actor.cpp"
        ;   Label: FUN_0040b120
    MOV ECX,0x562                       ; 0040b125
    PUSH 0x577759                       ; 0040b12a | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040b12f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040b135 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040b13b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    MOV EAX,0x1                         ; 0040b140
    ADD ESP,0x4                         ; 0040b145
    RET                                 ; 0040b148

