; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonLeftPlane_FUN_0043971e(undefined4 *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00439708 = 00439775
;   undefined1* PTR_caseD_1_0043970c = 004397a0
;   undefined1* PTR_caseD_3_00439714 = 0043977a
;   TerminatedCString s_engine_clipper_c_005b8f4a
;   TerminatedCString s_Ran_out_of_clipped_verts_005b8f5e
;   undefined4 DAT_007e4b10
;   undefined4 DAT_007e4d50
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043971e
        ;   Label: engine_clipper.c_clipPolygonLeftPlane_FUN_0043971e
    PUSH EBX                            ; 00439720
    PUSH ESI                            ; 00439721
    PUSH EDI                            ; 00439722
    PUSH EBP                            ; 00439723
    SUB ESP,0x8                         ; 00439724
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00439727
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043972b
    XOR EBX,EBX                         ; 0043972f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00439731
    MOV dword ptr [ESP],EBX             ; 00439735
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00439738
    TEST EAX,EAX                        ; 0043973c
    JLE 0x00439796                      ; 0043973e
        ;   XREF to: 00439796 (CONDITIONAL_JUMP)  ; LAB_00439796
    MOV dword ptr [ESP + 0x4],EDX       ; 00439740
    MOV EDI,dword ptr [ESP + 0x4]       ; 00439744
        ;   Label: LAB_00439744
    MOV EDX,dword ptr [ESI + 0x8]       ; 00439748
    MOV ECX,dword ptr [ESI]             ; 0043974b
    XOR EAX,EAX                         ; 0043974d
    NEG EDX                             ; 0043974f
    MOV EDI,dword ptr [EDI]             ; 00439751
    CMP EDX,ECX                         ; 00439753
    JL 0x0043975c                       ; 00439755
        ;   XREF to: 0043975c (CONDITIONAL_JUMP)  ; LAB_0043975c
    MOV EAX,0x1                         ; 00439757
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043975c
        ;   Label: LAB_0043975c
    MOV ECX,dword ptr [EDI]             ; 0043975f
    NEG EDX                             ; 00439761
    CMP EDX,ECX                         ; 00439763
    JL 0x00439769                       ; 00439765
        ;   XREF to: 00439769 (CONDITIONAL_JUMP)  ; LAB_00439769
    OR AL,0x2                           ; 00439767
    CMP EAX,0x3                         ; 00439769
        ;   Label: LAB_00439769
    JA 0x0043977a                       ; 0043976c
        ;   XREF to: 0043977a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439708]  ; 0043976e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00439775
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00439776
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043977a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043977e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00439781
    MOV ESI,EDI                         ; 00439785
    ADD EAX,0x4                         ; 00439787
    INC EDX                             ; 0043978a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043978b
    MOV dword ptr [ESP],EDX             ; 0043978f
    CMP EDX,ECX                         ; 00439792
    JL 0x00439744                       ; 00439794
        ;   XREF to: 00439744 (CONDITIONAL_JUMP)  ; LAB_00439744
    MOV EAX,EBX                         ; 00439796
        ;   Label: LAB_00439796
    ADD ESP,0x8                         ; 00439798
    POP EBP                             ; 0043979b
    POP EDI                             ; 0043979c
    POP ESI                             ; 0043979d
    POP EBX                             ; 0043979e
    RET                                 ; 0043979f
    CMP dword ptr [0x007e4d50],0xc      ; 004397a0 | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x004397cb                       ; 004397a7
        ;   XREF to: 004397cb (CONDITIONAL_JUMP)  ; LAB_004397cb
    MOV ECX,0x5b8f4a                    ; 004397a9 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 004397ae
    PUSH 0x5b8f5e                       ; 004397b3 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],ECX      ; 004397b8 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004397be | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004397c3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004397c8
    MOV EAX,[0x007e4d50]                ; 004397cb | DAT_007e4d50
        ;   Label: LAB_004397cb
    IMUL EDX,EAX,0x30                   ; 004397d0
    ADD EDX,0x7e4b10                    ; 004397d3 | DAT_007e4b10
    PUSH EDX                            ; 004397d9
    PUSH ESI                            ; 004397da
    INC EBX                             ; 004397db
    INC EAX                             ; 004397dc
    PUSH EDI                            ; 004397dd
    MOV [0x007e4d50],EAX                ; 004397de | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004397e3
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 004397e7
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0()
    ADD ESP,0xc                         ; 004397ec
    JMP 0x0043977a                      ; 004397ef
        ;   XREF to: 0043977a (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 004397f1
        ;   Label: caseD_2
    MOV EAX,[0x007e4d50]                ; 004397f2 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 004397f7
    CMP EAX,0xc                         ; 004397fb
    JL 0x00439823                       ; 004397fe
        ;   XREF to: 00439823 (CONDITIONAL_JUMP)  ; LAB_00439823
    MOV EDX,0x5b8f4a                    ; 00439800 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00439805
    PUSH 0x5b8f5e                       ; 0043980a | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],EDX      ; 0043980f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00439815 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043981b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00439820
    MOV EAX,[0x007e4d50]                ; 00439823 | DAT_007e4d50
        ;   Label: LAB_00439823
    IMUL EDX,EAX,0x30                   ; 00439828
    ADD EDX,0x7e4b10                    ; 0043982b | DAT_007e4b10
    PUSH EDX                            ; 00439831
    PUSH EDI                            ; 00439832
    INC EBX                             ; 00439833
    INC EAX                             ; 00439834
    PUSH ESI                            ; 00439835
    MOV [0x007e4d50],EAX                ; 00439836 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043983b
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 0043983f
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0()
    ADD ESP,0xc                         ; 00439844
    JMP 0x0043977a                      ; 00439847
        ;   XREF to: 0043977a (UNCONDITIONAL_JUMP)  ; caseD_3

