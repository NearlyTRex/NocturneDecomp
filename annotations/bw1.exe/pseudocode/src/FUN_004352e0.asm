; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004352e0(int param_1,undefined4 param_2)
;
;
; XREF[14]:
;   FUN_00412170 at 0041238e
;   FUN_00413c40 at 00413ddb
;   FUN_004248e0 at 00424a05
;   FUN_0042b580 at 0042b716
;   FUN_00448b70 at 00448cf3
;   FUN_0045c4a0 at 0045c636
;   FUN_00460f90 at 0046103c
;   FUN_004e05b0 at 004e0746
;   FUN_004f3cb0 at 004f3e4b
;   FUN_0051ec80 at 0051ee86
;   ... and 4 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004352e0
        ;   Label: FUN_004352e0
    FLD float ptr [EDX + 0x2fe4]        ; 004352e4
    FLDZ                                ; 004352ea
    FCOMPP                              ; 004352ec
    FNSTSW AX                           ; 004352ee
    SAHF                                ; 004352f0
    JNC 0x004352f4                      ; 004352f1
        ;   XREF to: 004352f4 (CONDITIONAL_JUMP)  ; LAB_004352f4
    RET                                 ; 004352f3
    MOV ECX,dword ptr [ESP + 0x8]       ; 004352f4
        ;   Label: LAB_004352f4
    PUSH ECX                            ; 004352f8
    MOV EAX,dword ptr [EDX + 0x154]     ; 004352f9
    PUSH EDX                            ; 004352ff
    MOV dword ptr [EDX + 0x2fe4],0x3dcccccd ; 00435300
    CALL dword ptr [EAX + 0x2c]         ; 0043530a
    ADD ESP,0x8                         ; 0043530d
    RET                                 ; 00435310

