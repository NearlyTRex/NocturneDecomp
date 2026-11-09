; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_buildRotationMatrix_FUN_005076b0(int pitch,int yaw,int roll)
;
; Parameters:
; int              Stack[0x4]:4   pitch
; int              Stack[0x8]:4   yaw
; int              Stack[0xc]:4   roll
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   ... and 4 more
;
; Called Functions:
;   engine_matrix.c_FUN_00507350
;   engine_matrix.c_FUN_00507390
;   engine_matrix.c_invertTransformMatrix_FUN_005073d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005076b0
        ;   Label: engine_matrix.c_buildRotationMatrix_FUN_005076b0
    PUSH ESI                            ; 005076b1
    PUSH EBP                            ; 005076b2
    SUB ESP,0x8                         ; 005076b3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005076b6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005076ba
    PUSH EDI                            ; 005076be
    PUSH EBX                            ; 005076bf
    CALL engine_matrix.c_FUN_00507350   ; 005076c0
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    ADD ESP,0x4                         ; 005076c5
    PUSH EBX                            ; 005076c8
    MOV EBP,EAX                         ; 005076c9
    CALL engine_matrix.c_FUN_00507390   ; 005076cb
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    MOV dword ptr [ESP + 0xc],EAX       ; 005076d0
    ADD ESP,0x4                         ; 005076d4
    PUSH ESI                            ; 005076d7
    CALL engine_matrix.c_FUN_00507350   ; 005076d8
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    ADD ESP,0x4                         ; 005076dd
    PUSH ESI                            ; 005076e0
    MOV EBX,EAX                         ; 005076e1
    CALL engine_matrix.c_FUN_00507390   ; 005076e3
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    ADD ESP,0x4                         ; 005076e8
    MOV EDX,dword ptr [ESP + 0x24]      ; 005076eb
    PUSH EDX                            ; 005076ef
    MOV ESI,EAX                         ; 005076f0
    CALL engine_matrix.c_FUN_00507350   ; 005076f2
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    ADD ESP,0x4                         ; 005076f7
    MOV ECX,dword ptr [ESP + 0x24]      ; 005076fa
    PUSH ECX                            ; 005076fe
    MOV EDI,EAX                         ; 005076ff
    CALL engine_matrix.c_FUN_00507390   ; 00507701
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    MOV ECX,EAX                         ; 00507706
    ADD ESP,0x4                         ; 00507708
    MOV EAX,ESI                         ; 0050770b
    MOV EDX,ECX                         ; 0050770d
    IMUL EDX                            ; 0050770f
    SHRD EAX,EDX,0x10                   ; 00507711
    MOV dword ptr [ESP + 0x4],EAX       ; 00507715
    MOV EDX,EBP                         ; 00507719
    MOV EAX,EBX                         ; 0050771b
    IMUL EDX                            ; 0050771d
    SHRD EAX,EDX,0x10                   ; 0050771f
    MOV EDX,EDI                         ; 00507723
    IMUL EDX                            ; 00507725
    SHRD EAX,EDX,0x10                   ; 00507727
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050772b
    ADD EDX,EAX                         ; 0050772f
    MOV dword ptr [0x01c51d5c],EDX      ; 00507731 | DAT_01c51d5c
    MOV EDX,ECX                         ; 00507737
    MOV EAX,EBX                         ; 00507739
    NEG EDX                             ; 0050773b
    IMUL EDX                            ; 0050773d
    SHRD EAX,EDX,0x10                   ; 0050773f
    MOV dword ptr [ESP + 0x4],EAX       ; 00507743
    MOV EDX,EBP                         ; 00507747
    MOV EAX,ESI                         ; 00507749
    IMUL EDX                            ; 0050774b
    SHRD EAX,EDX,0x10                   ; 0050774d
    MOV EDX,EDI                         ; 00507751
    IMUL EDX                            ; 00507753
    SHRD EAX,EDX,0x10                   ; 00507755
    MOV EDX,dword ptr [ESP + 0x4]       ; 00507759
    ADD EDX,EAX                         ; 0050775d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050775f
    MOV dword ptr [0x01c51d60],EDX      ; 00507763 | DAT_01c51d60
    MOV EDX,EDI                         ; 00507769
    IMUL EDX                            ; 0050776b
    SHRD EAX,EDX,0x10                   ; 0050776d
    MOV [0x01c51d64],EAX                ; 00507771 | DAT_01c51d64
    MOV EDX,EBX                         ; 00507776
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507778
    IMUL EDX                            ; 0050777c
    SHRD EAX,EDX,0x10                   ; 0050777e
    MOV [0x01c51d68],EAX                ; 00507782 | DAT_01c51d68
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507787
    MOV EDX,ESI                         ; 0050778b
    IMUL EDX                            ; 0050778d
    SHRD EAX,EDX,0x10                   ; 0050778f
    MOV [0x01c51d6c],EAX                ; 00507793 | DAT_01c51d6c
    MOV dword ptr [0x01c51d70],EBP      ; 00507798 | DAT_01c51d70
    MOV EAX,EBP                         ; 0050779e
    MOV EDX,EDI                         ; 005077a0
    NEG EAX                             ; 005077a2
    NEG EDX                             ; 005077a4
    MOV [0x01c51d70],EAX                ; 005077a6 | DAT_01c51d70
    MOV EAX,ESI                         ; 005077ab
    IMUL EDX                            ; 005077ad
    SHRD EAX,EDX,0x10                   ; 005077af
    MOV dword ptr [ESP + 0x4],EAX       ; 005077b3
    MOV EDX,EBP                         ; 005077b7
    MOV EAX,EBX                         ; 005077b9
    IMUL EDX                            ; 005077bb
    SHRD EAX,EDX,0x10                   ; 005077bd
    MOV EDX,ECX                         ; 005077c1
    IMUL EDX                            ; 005077c3
    SHRD EAX,EDX,0x10                   ; 005077c5
    MOV EDX,dword ptr [ESP + 0x4]       ; 005077c9
    ADD EDX,EAX                         ; 005077cd
    MOV dword ptr [0x01c51d74],EDX      ; 005077cf | DAT_01c51d74
    MOV EAX,EDI                         ; 005077d5
    MOV EDX,EBX                         ; 005077d7
    IMUL EDX                            ; 005077d9
    SHRD EAX,EDX,0x10                   ; 005077db
    MOV EBX,EAX                         ; 005077df
    MOV EDX,EBP                         ; 005077e1
    MOV EAX,ESI                         ; 005077e3
    IMUL EDX                            ; 005077e5
    SHRD EAX,EDX,0x10                   ; 005077e7
    MOV EDX,ECX                         ; 005077eb
    IMUL EDX                            ; 005077ed
    SHRD EAX,EDX,0x10                   ; 005077ef
    MOV EDX,ECX                         ; 005077f3
    ADD EBX,EAX                         ; 005077f5
    MOV EAX,dword ptr [ESP + 0x8]       ; 005077f7
    MOV dword ptr [0x01c51d78],EBX      ; 005077fb | DAT_01c51d78
    IMUL EDX                            ; 00507801
    SHRD EAX,EDX,0x10                   ; 00507803
    MOV [0x01c51d7c],EAX                ; 00507807 | DAT_01c51d7c
    MOV EAX,[0x0061b49c]                ; 0050780c | DAT_0061b49c
    CMP EAX,0xc8                        ; 00507811
    JC 0x005079b6                       ; 00507816
        ;   XREF to: 005079b6 (CONDITIONAL_JUMP)  ; LAB_005079b6
    JA 0x005079af                       ; 0050781c
        ;   XREF to: 005079af (CONDITIONAL_JUMP)  ; LAB_005079af
    MOV dword ptr [0x01d1dd70],0x15555  ; 00507822 | DAT_01d1dd70
    MOV EAX,0x10000                     ; 0050782c
        ;   Label: LAB_0050782c
    MOV EBX,dword ptr [0x01c4eff8]      ; 00507831 | DAT_01c4eff8
    MOV EDX,dword ptr [0x01c4effc]      ; 00507837 | DAT_01c4effc
    IMUL EDX                            ; 0050783d
    IDIV EBX                            ; 0050783f
    MOV ECX,EAX                         ; 00507841
    MOV EDX,dword ptr [0x0061b498]      ; 00507843 | DAT_0061b498
    NEG ECX                             ; 00507849
    IMUL EDX,ECX                        ; 0050784b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050784e
    SUB EAX,EDX                         ; 00507855
    MOV ECX,dword ptr [0x0061b49c]      ; 00507857 | DAT_0061b49c
    MOV EDX,EAX                         ; 0050785d
    SHL ECX,0x2                         ; 0050785f
    SAR EDX,0x1f                        ; 00507862
    IDIV ECX                            ; 00507865
    MOV EDX,dword ptr [0x01c51d5c]      ; 00507867 | DAT_01c51d5c
    MOV ECX,EAX                         ; 0050786d
    IMUL EDX                            ; 0050786f
    SHRD EAX,EDX,0x10                   ; 00507871
    MOV EDX,dword ptr [0x01c51d68]      ; 00507875 | DAT_01c51d68
    MOV [0x01c51d5c],EAX                ; 0050787b | DAT_01c51d5c
    MOV EAX,ECX                         ; 00507880
    IMUL EDX                            ; 00507882
    SHRD EAX,EDX,0x10                   ; 00507884
    MOV EDX,dword ptr [0x01c51d74]      ; 00507888 | DAT_01c51d74
    MOV [0x01c51d68],EAX                ; 0050788e | DAT_01c51d68
    MOV EAX,ECX                         ; 00507893
    IMUL EDX                            ; 00507895
    SHRD EAX,EDX,0x10                   ; 00507897
    MOV ESI,dword ptr [0x01c4f008]      ; 0050789b | DAT_01c4f008
    MOV [0x01c51d74],EAX                ; 005078a1 | DAT_01c51d74
    MOV EAX,[0x01c4f010]                ; 005078a6 | DAT_01c4f010
    SUB EAX,ESI                         ; 005078ab
    LEA EDX,[EAX*0x4 + 0x0]             ; 005078ad
    ADD EDX,EAX                         ; 005078b4
    SHL EDX,0x7                         ; 005078b6
    MOV EDI,dword ptr [0x0061b498]      ; 005078b9 | DAT_0061b498
    MOV EAX,EDX                         ; 005078bf
    SAR EDX,0x1f                        ; 005078c1
    IDIV EDI                            ; 005078c4
    MOV ECX,dword ptr [0x01c4f014]      ; 005078c6 | DAT_01c4f014
    SUB ECX,dword ptr [0x01c4f00c]      ; 005078cc | DAT_01c4f00c
    SHL ECX,0x5                         ; 005078d2
    MOV EDX,ECX                         ; 005078d5
    LEA EBX,[EAX*0x4 + 0x0]             ; 005078d7
    SHL EDX,0x4                         ; 005078de
    SUB EBX,EAX                         ; 005078e1
    SUB EDX,ECX                         ; 005078e3
    MOV ECX,dword ptr [0x0061b49c]      ; 005078e5 | DAT_0061b49c
    MOV EAX,EDX                         ; 005078eb
    SAR EDX,0x1f                        ; 005078ed
    IDIV ECX                            ; 005078f0
    SHL EBX,0x10                        ; 005078f2
    MOV ECX,EAX                         ; 005078f5
    MOV EDX,EBX                         ; 005078f7
    MOV EAX,EBX                         ; 005078f9
    SAR EDX,0x1f                        ; 005078fb
    IDIV ECX                            ; 005078fe
    MOV EDX,EAX                         ; 00507900
    SAR EDX,0x1f                        ; 00507902
    SHL EDX,0x2                         ; 00507905
    SBB EAX,EDX                         ; 00507908
    SAR EAX,0x2                         ; 0050790a
    MOV EBX,dword ptr [0x0061b4c4]      ; 0050790d | DAT_0061b4c4
    MOV ECX,EAX                         ; 00507913
    MOV EAX,[0x01c51d5c]                ; 00507915 | DAT_01c51d5c
    MOV EDX,ECX                         ; 0050791a
    IMUL EDX                            ; 0050791c
    IDIV EBX                            ; 0050791e
    MOV EBX,dword ptr [0x0061b4c4]      ; 00507920 | DAT_0061b4c4
    MOV [0x01c51d5c],EAX                ; 00507926 | DAT_01c51d5c
    MOV EDX,ECX                         ; 0050792b
    MOV EAX,[0x01c51d60]                ; 0050792d | DAT_01c51d60
    IMUL EDX                            ; 00507932
    IDIV EBX                            ; 00507934
    MOV EBX,dword ptr [0x0061b4c4]      ; 00507936 | DAT_0061b4c4
    MOV [0x01c51d60],EAX                ; 0050793c | DAT_01c51d60
    MOV EDX,ECX                         ; 00507941
    MOV EAX,[0x01c51d68]                ; 00507943 | DAT_01c51d68
    IMUL EDX                            ; 00507948
    IDIV EBX                            ; 0050794a
    MOV EBX,dword ptr [0x0061b4c4]      ; 0050794c | DAT_0061b4c4
    MOV [0x01c51d68],EAX                ; 00507952 | DAT_01c51d68
    MOV EDX,ECX                         ; 00507957
    MOV EAX,[0x01c51d6c]                ; 00507959 | DAT_01c51d6c
    IMUL EDX                            ; 0050795e
    IDIV EBX                            ; 00507960
    MOV [0x01c51d6c],EAX                ; 00507962 | DAT_01c51d6c
    POP EDI                             ; 00507967
    MOV EBX,dword ptr [0x0061b4c4]      ; 00507968 | DAT_0061b4c4
    MOV EAX,[0x01c51d74]                ; 0050796e | DAT_01c51d74
    MOV EDX,ECX                         ; 00507973
    IMUL EDX                            ; 00507975
    IDIV EBX                            ; 00507977
    MOV EBX,dword ptr [0x0061b4c4]      ; 00507979 | DAT_0061b4c4
    MOV [0x01c51d74],EAX                ; 0050797f | DAT_01c51d74
    MOV EDX,ECX                         ; 00507984
    MOV EAX,[0x01c51d78]                ; 00507986 | DAT_01c51d78
    IMUL EDX                            ; 0050798b
    IDIV EBX                            ; 0050798d
    MOV [0x01c51d78],EAX                ; 0050798f | DAT_01c51d78
    CALL engine_matrix.c_invertTransformMatrix_FUN_005073d0 ; 00507994
        ;   XREF to: 005073d0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_005073d0()
    ADD ESP,0x8                         ; 00507999
    POP EBP                             ; 0050799c
    POP ESI                             ; 0050799d
    POP EBX                             ; 0050799e
    RET                                 ; 0050799f
    MOV dword ptr [0x01d1dd70],0xaaaa   ; 005079a0 | DAT_01d1dd70
        ;   Label: LAB_005079a0
    JMP 0x0050782c                      ; 005079aa
        ;   XREF to: 0050782c (UNCONDITIONAL_JUMP)  ; LAB_0050782c
    CMP EAX,0x190                       ; 005079af
        ;   Label: LAB_005079af
    JZ 0x005079a0                       ; 005079b4
        ;   XREF to: 005079a0 (CONDITIONAL_JUMP)  ; LAB_005079a0
    MOV dword ptr [0x01d1dd70],0x10000  ; 005079b6 | DAT_01d1dd70
        ;   Label: LAB_005079b6
    JMP 0x0050782c                      ; 005079c0
        ;   XREF to: 0050782c (UNCONDITIONAL_JUMP)  ; LAB_0050782c

