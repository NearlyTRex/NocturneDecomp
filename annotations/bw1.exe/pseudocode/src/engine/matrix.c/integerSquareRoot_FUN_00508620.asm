; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_integerSquareRoot_FUN_00508620(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; XREF[1]:
;   engine_matrix.c_normalizeVector3DFixed_FUN_00508700 at 00508722
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508620
        ;   Label: engine_matrix.c_integerSquareRoot_FUN_00508620
    MOV EBX,dword ptr [ESP + 0x8]       ; 00508621
    CMP EBX,0x1                         ; 00508625
    JL 0x005086c9                       ; 00508628
        ;   XREF to: 005086c9 (CONDITIONAL_JUMP)  ; LAB_005086c9
    MOV ECX,0xc8                        ; 0050862e
        ;   Label: LAB_0050862e
    MOV EDX,EBX                         ; 00508633
    MOV EAX,EBX                         ; 00508635
    SAR EDX,0x1f                        ; 00508637
    IDIV ECX                            ; 0050863a
    LEA ECX,[EAX + 0x2]                 ; 0050863c
    MOV EDX,EBX                         ; 0050863f
    MOV EAX,EBX                         ; 00508641
    SAR EDX,0x1f                        ; 00508643
    IDIV ECX                            ; 00508646
    LEA EDX,[EAX + ECX*0x1]             ; 00508648
    MOV EAX,EDX                         ; 0050864b
    SAR EDX,0x1f                        ; 0050864d
    SUB EAX,EDX                         ; 00508650
    SAR EAX,0x1                         ; 00508652
    MOV ECX,EAX                         ; 00508654
    MOV EDX,EBX                         ; 00508656
    MOV EAX,EBX                         ; 00508658
    SAR EDX,0x1f                        ; 0050865a
    IDIV ECX                            ; 0050865d
    LEA EDX,[EAX + ECX*0x1]             ; 0050865f
    MOV EAX,EDX                         ; 00508662
    SAR EDX,0x1f                        ; 00508664
    SUB EAX,EDX                         ; 00508667
    SAR EAX,0x1                         ; 00508669
    MOV ECX,EAX                         ; 0050866b
    MOV EDX,EBX                         ; 0050866d
    MOV EAX,EBX                         ; 0050866f
    SAR EDX,0x1f                        ; 00508671
    IDIV ECX                            ; 00508674
    LEA EDX,[EAX + ECX*0x1]             ; 00508676
    MOV EAX,EDX                         ; 00508679
    SAR EDX,0x1f                        ; 0050867b
    SUB EAX,EDX                         ; 0050867e
    SAR EAX,0x1                         ; 00508680
    MOV ECX,EAX                         ; 00508682
    MOV EDX,EBX                         ; 00508684
    MOV EAX,EBX                         ; 00508686
    SAR EDX,0x1f                        ; 00508688
    IDIV ECX                            ; 0050868b
    LEA EDX,[EAX + ECX*0x1]             ; 0050868d
    MOV EAX,EDX                         ; 00508690
    SAR EDX,0x1f                        ; 00508692
    SUB EAX,EDX                         ; 00508695
    SAR EAX,0x1                         ; 00508697
    MOV ECX,EAX                         ; 00508699
    MOV EDX,EBX                         ; 0050869b
    MOV EAX,EBX                         ; 0050869d
    SAR EDX,0x1f                        ; 0050869f
    IDIV ECX                            ; 005086a2
    LEA EDX,[EAX + ECX*0x1]             ; 005086a4
    MOV EAX,EDX                         ; 005086a7
    SAR EDX,0x1f                        ; 005086a9
    SUB EAX,EDX                         ; 005086ac
    SAR EAX,0x1                         ; 005086ae
    MOV ECX,EAX                         ; 005086b0
    MOV EDX,EBX                         ; 005086b2
    MOV EAX,EBX                         ; 005086b4
    SAR EDX,0x1f                        ; 005086b6
    IDIV ECX                            ; 005086b9
    LEA EDX,[EAX + ECX*0x1]             ; 005086bb
    MOV EAX,EDX                         ; 005086be
    SAR EDX,0x1f                        ; 005086c0
    SUB EAX,EDX                         ; 005086c3
    SAR EAX,0x1                         ; 005086c5
    POP EBX                             ; 005086c7
    RET                                 ; 005086c8
    MOV EDX,0x5e775b                    ; 005086c9
        ;   Label: LAB_005086c9
    MOV ECX,0x391                       ; 005086ce
    PUSH 0x5e776e                       ; 005086d3
    MOV dword ptr [0x01d1d400],EDX      ; 005086d8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005086de | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005086e4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005086e9
    JMP 0x0050862e                      ; 005086ec
        ;   XREF to: 0050862e (UNCONDITIONAL_JUMP)  ; LAB_0050862e

