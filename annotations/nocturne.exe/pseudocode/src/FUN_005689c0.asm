; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005689c0(uint param_1,int param_2,DWORD param_3)
;
;
; XREF[9]:
;   FUN_005634b0 at 00563508
;   FUN_0056582c at 005658b7
;   FUN_00568890 at 00568959
;   FUN_00571efe at 00571fae
;   FUN_00571fd1 at 00572134
;   FUN_00572338 at 0057236f
;   FUN_005723ae at 00572417
;   FUN_00572f40 at 00572f55
;   FUN_005733e0 at 00573593
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005755a0 = 00175ff4
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   FUN_005671e4
;   FUN_00568e80
;   FUN_0056c73c
;   FUN_0056f220
;   FUN_0056f278
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005689c0
        ;   Label: FUN_005689c0
    PUSH ESI                            ; 005689c1
    PUSH EDI                            ; 005689c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005689c3
    TEST EBX,EBX                        ; 005689c7
    JL 0x005689d3                       ; 005689c9
        ;   XREF to: 005689d3 (CONDITIONAL_JUMP)  ; LAB_005689d3
    CMP EBX,dword ptr [0x005c1f90]      ; 005689cb | DAT_005c1f90
    JBE 0x005689e6                      ; 005689d1
        ;   XREF to: 005689e6 (CONDITIONAL_JUMP)  ; LAB_005689e6
    PUSH 0x4                            ; 005689d3
        ;   Label: LAB_005689d3
    CALL FUN_00568e80                   ; 005689d5
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 005689da
    ADD ESP,0x4                         ; 005689df
    POP EDI                             ; 005689e2
    POP ESI                             ; 005689e3
    POP EBX                             ; 005689e4
    RET                                 ; 005689e5
    PUSH EBX                            ; 005689e6
        ;   Label: LAB_005689e6
    CALL dword ptr [0x005c1ac0]         ; 005689e7 | PTR_FUN_005c1ac0
    ADD ESP,0x4                         ; 005689ed
    PUSH EBX                            ; 005689f0
    CALL FUN_0056f220                   ; 005689f1
        ;   XREF to: 0056f220 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f220()
    ADD ESP,0x4                         ; 005689f6
    CMP dword ptr [ESP + 0x14],0x0      ; 005689f9
    JLE 0x00568a11                      ; 005689fe
        ;   XREF to: 00568a11 (CONDITIONAL_JUMP)  ; LAB_00568a11
    TEST AL,0x80                        ; 00568a00
    JNZ 0x00568a11                      ; 00568a02
        ;   XREF to: 00568a11 (CONDITIONAL_JUMP)  ; LAB_00568a11
    OR AH,0x80                          ; 00568a04
    PUSH EAX                            ; 00568a07
    PUSH EBX                            ; 00568a08
    CALL FUN_0056f278                   ; 00568a09
        ;   XREF to: 0056f278 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f278()
    ADD ESP,0x8                         ; 00568a0e
    MOV ESI,dword ptr [0x005c1f54]      ; 00568a11 | DAT_005c1f54
        ;   Label: LAB_00568a11
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 00568a17
    MOV ESI,dword ptr [ESP + 0x18]      ; 00568a1a
    PUSH ESI                            ; 00568a1e
    PUSH 0x0                            ; 00568a1f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00568a21
    PUSH EDI                            ; 00568a25
    PUSH EAX                            ; 00568a26
    CALL dword ptr CS:[0x5755a0]        ; 00568a27 | PTR_SetFilePointer_005755a0
    PUSH EBX                            ; 00568a2e
    MOV ESI,EAX                         ; 00568a2f
    CALL dword ptr [0x005c1ac4]         ; 00568a31 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00568a37
    CMP ESI,-0x1                        ; 00568a3a
    JNZ 0x00568a44                      ; 00568a3d
        ;   XREF to: 00568a44 (CONDITIONAL_JUMP)  ; LAB_00568a44
    CALL FUN_0056c73c                   ; 00568a3f
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined FUN_0056c73c()
    MOV EAX,ESI                         ; 00568a44
        ;   Label: LAB_00568a44
    POP EDI                             ; 00568a46
    POP ESI                             ; 00568a47
    POP EBX                             ; 00568a48
    RET                                 ; 00568a49

