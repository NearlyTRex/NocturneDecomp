; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_005346b0(CDemonSet *this_ptr,int layer_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderDecals_FUN_0053ba40 at 0053ba58
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534f4a
;   core_set.cpp_FUN_00535a80 at 00535bc6
;   core_set.cpp_FUN_005365c0 at 0053676c
;   core_set.cpp_FUN_00536990 at 00536b28
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00600530
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d81080
;   undefined4 DAT_01d82088
;
; Called Functions:
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   core_set.cpp_FUN_0053b100
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005346b0
        ;   Label: core_set.cpp_FUN_005346b0
    PUSH ESI                            ; 005346b1
    PUSH EDI                            ; 005346b2
    PUSH EBP                            ; 005346b3
    SUB ESP,0x50                        ; 005346b4
    MOV EBP,dword ptr [ESP + 0x64]      ; 005346b7
    MOV EAX,[0x00600530]                ; 005346bb | DAT_00600530 | DAT_01d81080
    CMP dword ptr [EAX + 0x1008],0x0    ; 005346c0 | DAT_01d82088
    JNZ 0x005347f2                      ; 005346c7
        ;   XREF to: 005347f2 (CONDITIONAL_JUMP)  ; LAB_005347f2
    XOR EBX,EBX                         ; 005346cd
        ;   Label: LAB_005346cd
    MOV ESI,dword ptr [EBP + 0x15f6fc]  ; 005346cf
    MOV dword ptr [ESP + 0x4c],EBX      ; 005346d5
    TEST ESI,ESI                        ; 005346d9
    JLE 0x005347ea                      ; 005346db
        ;   XREF to: 005347ea (CONDITIONAL_JUMP)  ; LAB_005347ea
    MOV dword ptr [ESP + 0x48],EBP      ; 005346e1
    MOV EBX,dword ptr [ESP + 0x48]      ; 005346e5
        ;   Label: LAB_005346e5
    MOV EBX,dword ptr [EBX + 0x15f700]  ; 005346e9
    PUSH EBX                            ; 005346ef
    MOV EAX,dword ptr [EBX + 0x154]     ; 005346f0
    LEA ESI,[ESP + 0x1c]                ; 005346f6
    LEA EDI,[ESP + 0x34]                ; 005346fa
    CALL dword ptr [EAX + 0x1c]         ; 005346fe
    MOV ECX,0x6                         ; 00534701
    LEA ESI,[ESP + 0x1c]                ; 00534706
    ADD ESP,0x4                         ; 0053470a
    MOVSD.REP ES:EDI,ESI                ; 0053470d
    MOV EDX,ESP                         ; 0053470f
    LEA ESI,[ESP + 0x30]                ; 00534711
    CMP EDX,ESI                         ; 00534715
    JNZ 0x005347fd                      ; 00534717
        ;   XREF to: 005347fd (CONDITIONAL_JUMP)  ; LAB_005347fd
    LEA EAX,[ESP + 0xc]                 ; 0053471d
        ;   Label: LAB_0053471d
    LEA EDX,[ESI + 0xc]                 ; 00534721
    CMP EAX,EDX                         ; 00534724
    JZ 0x0053473c                       ; 00534726
        ;   XREF to: 0053473c (CONDITIONAL_JUMP)  ; LAB_0053473c
    MOV EAX,dword ptr [EDX]             ; 00534728
    MOV dword ptr [ESP + 0xc],EAX       ; 0053472a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053472e
    MOV dword ptr [ESP + 0x10],EAX      ; 00534731
    MOV EAX,dword ptr [EDX + 0x8]       ; 00534735
    MOV dword ptr [ESP + 0x14],EAX      ; 00534738
    LEA EAX,[EBX + 0x3c]                ; 0053473c
        ;   Label: LAB_0053473c
    PUSH EAX                            ; 0053473f
    LEA EAX,[ESP + 0x10]                ; 00534740
    PUSH EAX                            ; 00534744
    LEA EAX,[ESP + 0x8]                 ; 00534745
    PUSH EAX                            ; 00534749
    LEA EAX,[EBX + 0x30]                ; 0053474a
    PUSH EAX                            ; 0053474d
    LEA EAX,[EBX + 0x20]                ; 0053474e
    PUSH EAX                            ; 00534751
    PUSH EBP                            ; 00534752
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 00534753
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 00534758
    MOV EDI,dword ptr [EBX + 0x110]     ; 0053475b
    PUSH EDI                            ; 00534761
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00534762
    PUSH EAX                            ; 00534768
    MOV EDX,dword ptr [EBX + 0x108]     ; 00534769
    PUSH EDX                            ; 0053476f
    PUSH EBP                            ; 00534770
    CALL core_set.cpp_FUN_0053b100      ; 00534771
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00534776
    PUSH 0xffff                         ; 00534779
    MOV ECX,dword ptr [0x005f2afc]      ; 0053477e | DAT_005f2afc
    PUSH ECX                            ; 00534784 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00534785
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0053478a
    MOV ESI,dword ptr [ESP + 0x68]      ; 0053478d
    PUSH ESI                            ; 00534791
    MOV EAX,dword ptr [EBX + 0x154]     ; 00534792
    PUSH EBX                            ; 00534798
    CALL dword ptr [EAX + 0x18]         ; 00534799
    ADD ESP,0x8                         ; 0053479c
    PUSH 0x10000                        ; 0053479f
    PUSH 0x10000                        ; 005347a4
    PUSH 0x10000                        ; 005347a9
    PUSH EBP                            ; 005347ae
    CALL core_set.cpp_FUN_0053b100      ; 005347af
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 005347b4
    PUSH 0x1                            ; 005347b7
    MOV EDI,dword ptr [0x005f2afc]      ; 005347b9 | DAT_005f2afc
    PUSH EDI                            ; 005347bf | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 005347c0
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005347c5
    MOV ECX,dword ptr [EBP + 0x15f6fc]  ; 005347c8
    MOV EAX,dword ptr [ESP + 0x48]      ; 005347ce
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005347d2
    ADD EAX,0x4                         ; 005347d6
    INC EDX                             ; 005347d9
    MOV dword ptr [ESP + 0x48],EAX      ; 005347da
    MOV dword ptr [ESP + 0x4c],EDX      ; 005347de
    CMP EDX,ECX                         ; 005347e2
    JL 0x005346e5                       ; 005347e4
        ;   XREF to: 005346e5 (CONDITIONAL_JUMP)  ; LAB_005346e5
    ADD ESP,0x50                        ; 005347ea
        ;   Label: LAB_005347ea
    POP EBP                             ; 005347ed
    POP EDI                             ; 005347ee
    POP ESI                             ; 005347ef
    POP EBX                             ; 005347f0
    RET                                 ; 005347f1
    XOR ECX,ECX                         ; 005347f2
        ;   Label: LAB_005347f2
    MOV dword ptr [ESP + 0x68],ECX      ; 005347f4
    JMP 0x005346cd                      ; 005347f8
        ;   XREF to: 005346cd (UNCONDITIONAL_JUMP)  ; LAB_005346cd
    MOV EAX,dword ptr [ESP + 0x30]      ; 005347fd
        ;   Label: LAB_005347fd
    MOV dword ptr [ESP],EAX             ; 00534801
    MOV EAX,dword ptr [ESP + 0x34]      ; 00534804
    MOV dword ptr [ESP + 0x4],EAX       ; 00534808
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053480c
    MOV dword ptr [ESP + 0x8],EAX       ; 00534810
    JMP 0x0053471d                      ; 00534814
        ;   XREF to: 0053471d (UNCONDITIONAL_JUMP)  ; LAB_0053471d

