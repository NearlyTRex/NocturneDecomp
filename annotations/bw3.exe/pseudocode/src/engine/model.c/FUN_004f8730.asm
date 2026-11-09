; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_model_c_FUN_004f8730(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
;
; XREF[4]:
;   engine_3d.c_FUN_00407860 at 004078b0
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df050 at 004df3b4
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60 at 004dee7d
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004df440 at 004df4aa
;
; Referenced Globals:
;   void* switchdataD_004f861c = 004f874f
;   TerminatedCString s_MRGLSize_Bad_type_d_005c9096
;   TerminatedCString s_engine_model_c_005c90ae
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 004f8730
        ;   Label: engine_model.c_FUN_004f8730
    MOV EAX,dword ptr [ESP + 0x104]     ; 004f8736
    MOV EDX,dword ptr [EAX]             ; 004f873d
    CMP EDX,0x42                        ; 004f873f
    JA 0x004f8855                       ; 004f8742
        ;   XREF to: 004f8855 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EDX*0x4 + 0x4f861c]  ; 004f8748 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,0x4                         ; 004f874f
        ;   Label: caseD_0
    ADD ESP,0x100                       ; 004f8754
    RET                                 ; 004f875a
    MOV EAX,0x10                        ; 004f875b
        ;   Label: caseD_1
    ADD ESP,0x100                       ; 004f8760
    RET                                 ; 004f8766
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f8767
        ;   Label: caseD_2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f876a
    SUB EAX,EDX                         ; 004f8771
    SHL EAX,0x2                         ; 004f8773
    ADD EAX,0xc                         ; 004f8776
    ADD ESP,0x100                       ; 004f8779
    RET                                 ; 004f877f
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f8780
        ;   Label: caseD_4
    SHL EAX,0x3                         ; 004f8783
    ADD EAX,0xc                         ; 004f8786
    ADD ESP,0x100                       ; 004f8789
    RET                                 ; 004f878f
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f8790
        ;   Label: caseD_5
    SHL EAX,0x2                         ; 004f8793
    ADD EAX,0x18                        ; 004f8796
    ADD ESP,0x100                       ; 004f8799
    RET                                 ; 004f879f
    MOV EAX,0x20                        ; 004f87a0
        ;   Label: caseD_9
    ADD ESP,0x100                       ; 004f87a5
    RET                                 ; 004f87ab
    MOV EAX,0x8                         ; 004f87ac
        ;   Label: caseD_a
    ADD ESP,0x100                       ; 004f87b1
    RET                                 ; 004f87b7
    MOV EAX,0x1c                        ; 004f87b8
        ;   Label: caseD_c
    ADD ESP,0x100                       ; 004f87bd
    RET                                 ; 004f87c3
    MOV EAX,0x18                        ; 004f87c4
        ;   Label: caseD_d
    ADD ESP,0x100                       ; 004f87c9
    RET                                 ; 004f87cf
    MOV EAX,0x48                        ; 004f87d0
        ;   Label: caseD_40
    ADD ESP,0x100                       ; 004f87d5
    RET                                 ; 004f87db
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f87dc
        ;   Label: caseD_e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f87df
    SUB EAX,EDX                         ; 004f87e6
    SHL EAX,0x2                         ; 004f87e8
    ADD EAX,0x18                        ; 004f87eb
    ADD ESP,0x100                       ; 004f87ee
    RET                                 ; 004f87f4
    MOV EAX,0x14                        ; 004f87f5
        ;   Label: caseD_10
    ADD ESP,0x100                       ; 004f87fa
    RET                                 ; 004f8800
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f8801
        ;   Label: caseD_16
    SHL EAX,0x2                         ; 004f8804
    ADD EAX,0x8                         ; 004f8807
    ADD ESP,0x100                       ; 004f880a
    RET                                 ; 004f8810
    MOV EAX,0xc                         ; 004f8811
        ;   Label: caseD_17
    ADD ESP,0x100                       ; 004f8816
    RET                                 ; 004f881c
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f881d
        ;   Label: caseD_1d
    SHL EAX,0x5                         ; 004f8820
    ADD EAX,0x1c                        ; 004f8823
    ADD ESP,0x100                       ; 004f8826
    RET                                 ; 004f882c
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f882d
        ;   Label: caseD_1f
    SHL EAX,0x2                         ; 004f8830
    ADD EAX,0xc                         ; 004f8833
    ADD ESP,0x100                       ; 004f8836
    RET                                 ; 004f883c
    MOV EAX,0x158                       ; 004f883d
        ;   Label: caseD_20
    ADD ESP,0x100                       ; 004f8842
    RET                                 ; 004f8848
    MOV EAX,0x3d60                      ; 004f8849
        ;   Label: caseD_26
    ADD ESP,0x100                       ; 004f884e
    RET                                 ; 004f8854
    PUSH EDX                            ; 004f8855
        ;   Label: caseD_13
    PUSH 0x5c9096                       ; 004f8856 | = "MRGLSize: Bad type : %d"
    LEA EAX,[ESP + 0x8]                 ; 004f885b
    PUSH EAX                            ; 004f885f
    CALL crt_unknown.c_FUN_005a28c0     ; 004f8860
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EDX,0x5c90ae                    ; 004f8865 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004f886a
    MOV EAX,ESP                         ; 004f886d
    MOV ECX,0x25c                       ; 004f886f
    PUSH EAX                            ; 004f8874
    MOV dword ptr [0x01d71de0],EDX      ; 004f8875 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f887b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f8881
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    MOV EAX,0x4                         ; 004f8886
    ADD ESP,0x4                         ; 004f888b
    ADD ESP,0x100                       ; 004f888e
    RET                                 ; 004f8894

