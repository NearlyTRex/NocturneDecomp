; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b250(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_0041dcd0 at 0041de70
;   FUN_004512f0 at 00451396
;   FUN_00460270 at 004602ce
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01bdd7fc
;
; Called Functions:
;   FUN_0046b580
;   FUN_004f53b0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 0053b250
        ;   Label: FUN_0053b250
    MOV EAX,[0x005f2afc]                ; 0053b254 | DAT_005f2afc
    MOV EDX,dword ptr [EAX + 0x18]      ; 0053b259 | DAT_01bdd7fc
    TEST EDX,EDX                        ; 0053b25c
    JZ 0x0053b275                       ; 0053b25e
        ;   XREF to: 0053b275 (CONDITIONAL_JUMP)  ; LAB_0053b275
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b260
    PUSH ECX                            ; 0053b264
    MOV EDX,dword ptr [EAX + 0x161668]  ; 0053b265
    PUSH EDX                            ; 0053b26b
    CALL FUN_004f53b0                   ; 0053b26c
        ;   XREF to: 004f53b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f53b0()
    ADD ESP,0x8                         ; 0053b271
    RET                                 ; 0053b274
    PUSH ECX                            ; 0053b275
        ;   Label: LAB_0053b275
    PUSH EAX                            ; 0053b276 | DAT_01bdd7e4
    CALL FUN_0046b580                   ; 0053b277
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 0053b27c
    RET                                 ; 0053b27f

