; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00450580(int param_1,float *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_0041daf0 at 0041dc6f
;   FUN_00535da0 at 005360bd
;
; Referenced Globals:
;   undefined4 DAT_005ddfbc
;   undefined4 DAT_005f17e4
;   undefined4 DAT_005f17e8
;   undefined4 DAT_005f17ec
;   undefined4 DAT_005fba20
;   undefined4 DAT_00b9e24c
;   undefined4 DAT_0149ef08
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6e24c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00450580
        ;   Label: FUN_00450580
    SUB ESP,0xc                         ; 00450581
    MOV ECX,dword ptr [ESP + 0x14]      ; 00450584
    MOV EAX,dword ptr [ESP + 0x18]      ; 00450588
    TEST EAX,EAX                        ; 0045058c
    JZ 0x004505a6                       ; 0045058e
        ;   XREF to: 004505a6 (CONDITIONAL_JUMP)  ; LAB_004505a6
    CMP dword ptr [0x0149ef08],0x0      ; 00450590 | DAT_0149ef08
    JZ 0x004505b0                       ; 00450597
        ;   XREF to: 004505b0 (CONDITIONAL_JUMP)  ; LAB_004505b0
    XOR EBP,EBP                         ; 00450599
    MOV dword ptr [0x01c6e24c],EBP      ; 0045059b | DAT_01c6e24c
    ADD ESP,0xc                         ; 004505a1
    POP EBP                             ; 004505a4
    RET                                 ; 004505a5
    MOV [0x01c6e24c],EAX                ; 004505a6 | DAT_01c6e24c
        ;   Label: LAB_004505a6
    ADD ESP,0xc                         ; 004505ab
    POP EBP                             ; 004505ae
    RET                                 ; 004505af
    PUSH EDI                            ; 004505b0
        ;   Label: LAB_004505b0
    PUSH ESI                            ; 004505b1
    PUSH EBX                            ; 004505b2
    LEA EBX,[ESP + 0xc]                 ; 004505b3
    FLD float ptr [EAX]                 ; 004505b7
    FMUL float ptr [0x005ddfbc]         ; 004505b9 | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 004505bf
    FLD float ptr [EAX + 0x4]           ; 004505c1
    FMUL float ptr [0x005ddfbc]         ; 004505c4 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 004505ca
    FLD float ptr [EAX + 0x8]           ; 004505cd
    FMUL float ptr [0x005ddfbc]         ; 004505d0 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 004505d6
    MOV EBX,dword ptr [ESP + 0x28]      ; 004505d9
    PUSH EBX                            ; 004505dd
    LEA EDX,[ESP + 0x10]                ; 004505de
    PUSH EDX                            ; 004505e2
    MOV EAX,dword ptr [ECX + 0x3c]      ; 004505e3
    PUSH ECX                            ; 004505e6
    CALL dword ptr [EAX + 0x8]          ; 004505e7
    MOV ECX,dword ptr [0x005f17e4]      ; 004505ea | DAT_005f17e4
    MOV ESI,EAX                         ; 004505f0
    MOV EAX,[0x005f17ec]                ; 004505f2 | DAT_005f17ec
    MOV EDI,dword ptr [0x005fba20]      ; 004505f7 | DAT_005fba20
    MOV EBX,dword ptr [ECX*0x4 + 0xb9e14c] ; 004505fd | DAT_00b9e24c
    MOV EDX,dword ptr [EAX*0x4 + 0xb9e14c] ; 00450604 | DAT_00b9e24c
    MOV EAX,[0x005f17e8]                ; 0045060b | DAT_005f17e8
    ADD ESP,0xc                         ; 00450610
    AND EBX,0xff                        ; 00450613
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 00450619 | DAT_00b9e24c
    AND EDX,0xff                        ; 00450620
    AND EAX,0xff                        ; 00450626
    CMP EDI,0x20                        ; 0045062b
    JNZ 0x00450662                      ; 0045062e
        ;   XREF to: 00450662 (CONDITIONAL_JUMP)  ; LAB_00450662
    MOV CL,byte ptr [0x01c6af74]        ; 00450630 | DAT_01c6af74
    SHL EBX,CL                          ; 00450636
    MOV CL,byte ptr [0x01c6af80]        ; 00450638 | DAT_01c6af80
    SHL EAX,CL                          ; 0045063e
    MOV CL,byte ptr [0x01c6af8c]        ; 00450640 | DAT_01c6af8c
    OR EBX,EAX                          ; 00450646
    SHL EDX,CL                          ; 00450648
    MOV ECX,EBX                         ; 0045064a
    OR ECX,EDX                          ; 0045064c
        ;   Label: LAB_0045064c
    MOV dword ptr [0x01c6e24c],ESI      ; 0045064e | DAT_01c6e24c
    MOV dword ptr [0x01c6e2bc],ECX      ; 00450654 | DAT_01c6e2bc
    POP EBX                             ; 0045065a
    POP ESI                             ; 0045065b
    POP EDI                             ; 0045065c
    ADD ESP,0xc                         ; 0045065d
    POP EBP                             ; 00450660
    RET                                 ; 00450661
    MOV ECX,EBX                         ; 00450662
        ;   Label: LAB_00450662
    SHL EAX,0x8                         ; 00450664
    SHL ECX,0x10                        ; 00450667
    OR ECX,EAX                          ; 0045066a
    JMP 0x0045064c                      ; 0045066c
        ;   XREF to: 0045064c (UNCONDITIONAL_JUMP)  ; LAB_0045064c

