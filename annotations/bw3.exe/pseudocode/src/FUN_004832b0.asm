; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004832b0(int param_1,byte param_2)
;
;
; XREF[6]:
;   FUN_0047db70 at 0047dcc2
;   FUN_004b7f90 at 004b8b3c
;   FUN_004e94f0 at 004e9d58
;   FUN_004eae80 at 004ebe0c
;   FUN_004f7a20 at 004f7b88
;   FUN_00560c90 at 00560cfd
;
; Referenced Globals:
;   undefined1* PTR_FUN_005df044 = 004832b0
;   undefined4 DAT_005df0c0
;
; Called Functions:
;   FUN_00481f40
;   FUN_00484f10
;   FUN_00485550
;   FUN_00486050
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004832b0
        ;   Label: FUN_004832b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004832b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004832b5
    JNZ 0x0048331b                      ; 004832ba
        ;   XREF to: 0048331b (CONDITIONAL_JUMP)  ; LAB_0048331b
    PUSH EBX                            ; 004832bc
    MOV dword ptr [EBX + 0xc],0x5df044  ; 004832bd | PTR_FUN_005df044
    CALL FUN_00484f10                   ; 004832c4
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f10()
    ADD ESP,0x4                         ; 004832c9
    PUSH 0x0                            ; 004832cc
    ADD EBX,0x2d8                       ; 004832ce
    PUSH EBX                            ; 004832d4
    CALL FUN_00486050                   ; 004832d5
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; undefined FUN_00486050()
    ADD ESP,0x8                         ; 004832da
    PUSH 0x0                            ; 004832dd
    SUB EAX,0xe4                        ; 004832df
    PUSH EAX                            ; 004832e4
    CALL FUN_00486050                   ; 004832e5
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; undefined FUN_00486050()
    ADD ESP,0x8                         ; 004832ea
    PUSH 0x0                            ; 004832ed
    SUB EAX,0x38                        ; 004832ef
    PUSH EAX                            ; 004832f2
    CALL FUN_00485550                   ; 004832f3
        ;   XREF to: 00485550 (UNCONDITIONAL_CALL)  ; undefined FUN_00485550()
    ADD ESP,0x8                         ; 004832f8
    PUSH 0x1                            ; 004832fb
    LEA EBX,[EAX + 0xfffffe44]          ; 004832fd
    PUSH EBX                            ; 00483303
    CALL FUN_00481f40                   ; 00483304
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00481f40()
    ADD ESP,0x8                         ; 00483309
    MOV DL,byte ptr [ESP + 0xc]         ; 0048330c
    MOV EBX,EAX                         ; 00483310
    TEST DL,0x2                         ; 00483312
    JNZ 0x00483336                      ; 00483315
        ;   XREF to: 00483336 (CONDITIONAL_JUMP)  ; LAB_00483336
    MOV EAX,EBX                         ; 00483317
    POP EBX                             ; 00483319
    RET                                 ; 0048331a
    PUSH 0x5df0c0                       ; 0048331b | DAT_005df0c0
        ;   Label: LAB_0048331b
    PUSH EBX                            ; 00483320
    CALL FUN_005a308f                   ; 00483321
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00483326
    PUSH EAX                            ; 00483329
    CALL FUN_005a30b6                   ; 0048332a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0048332f
    MOV EAX,EBX                         ; 00483332
    POP EBX                             ; 00483334
    RET                                 ; 00483335
    PUSH EAX                            ; 00483336
        ;   Label: LAB_00483336
    CALL FUN_005a30c4                   ; 00483337
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0048333c
    MOV EAX,EBX                         ; 0048333f
    POP EBX                             ; 00483341
    RET                                 ; 00483342

