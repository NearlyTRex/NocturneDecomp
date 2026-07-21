; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_vehicle_cpp_CVehicle_ctor_FUN_0054e5a0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_32ford.kfm_005972c1
;   string s_32ltire.kfm_005972cc
;   string s_32ltire.kfm_005972d8
;   string s_32rtire.kfm_005972e4
;   string s_32rtire.kfm_005972f0
;   string s_chicpath.pth_005972fc
;   undefined4 s_hicpath.pth_005972fc+1
;   undefined4 s_icpath.pth_005972fc+2
;   undefined4 s_cpath.pth_005972fc+3
;   undefined4 DAT_0059b030
;   undefined1* PTR_core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0_005a3c44 = 0054e7f0
;   undefined4 DAT_005a3d20
;
; Called Functions:
;   core_course.cpp_CCourse_ctor_FUN_0043b5d0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e5a0
        ;   Label: core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0
    PUSH ESI                            ; 0054e5a1
    PUSH EDI                            ; 0054e5a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e5a3
    PUSH EBX                            ; 0054e5a7
    CALL FUN_00409d30                   ; 0054e5a8
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0054e5ad
    ADD EAX,0x150                       ; 0054e5b0
    PUSH EAX                            ; 0054e5b5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0054e5b6
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0054e5bb
    PUSH 0x59b030                       ; 0054e5be | DAT_0059b030
    PUSH 0x4                            ; 0054e5c3
    ADD EAX,0x17c                       ; 0054e5c5
    PUSH EAX                            ; 0054e5ca
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0054e5cb
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0054e5d0
    PUSH 0x5a3d20                       ; 0054e5d3 | DAT_005a3d20
    PUSH 0x4                            ; 0054e5d8
    ADD EAX,0x668                       ; 0054e5da
    PUSH EAX                            ; 0054e5df
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0054e5e0
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0054e5e5
    ADD EAX,0x6e4                       ; 0054e5e8
    PUSH EAX                            ; 0054e5ed
    CALL core_course.cpp_CCourse_ctor_FUN_0043b5d0 ; 0054e5ee
        ;   XREF to: 0043b5d0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_ctor_FUN_0043b5d0()
    ADD ESP,0x4                         ; 0054e5f3
    LEA EBX,[EAX + 0xffffefe8]          ; 0054e5f6
    PUSH 0x5972c1                       ; 0054e5fc | = "32ford.kfm"
    LEA EAX,[EBX + 0x150]               ; 0054e601
    PUSH EAX                            ; 0054e607
    MOV dword ptr [EBX + 0x14c],0x5a3c44 ; 0054e608 | PTR_core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0_005a3c44
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054e612
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0054e617
    PUSH 0x5972cc                       ; 0054e61a | = "32ltire.kfm"
    LEA EAX,[EBX + 0x948]               ; 0054e61f
    PUSH EAX                            ; 0054e625
    MOV dword ptr [EBX + 0x930],0x4     ; 0054e626
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054e630
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0054e635
    PUSH 0x5972d8                       ; 0054e638 | = "32ltire.kfm"
    LEA EAX,[EBX + 0xcb0]               ; 0054e63d
    PUSH EAX                            ; 0054e643
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054e644
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0054e649
    PUSH 0x5972e4                       ; 0054e64c | = "32rtire.kfm"
    LEA EAX,[EBX + 0xafc]               ; 0054e651
    PUSH EAX                            ; 0054e657
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054e658
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0054e65d
    PUSH 0x5972f0                       ; 0054e660 | = "32rtire.kfm"
    LEA EAX,[EBX + 0xe64]               ; 0054e665
    PUSH EAX                            ; 0054e66b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054e66c
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x934],0xc0200000 ; 0054e671
    MOV dword ptr [EBX + 0x938],0xc0200000 ; 0054e67b
    MOV dword ptr [EBX + 0x93c],0x40a00000 ; 0054e685
    ADD ESP,0x8                         ; 0054e68f
    MOV dword ptr [EBX + 0x940],0x3fa00000 ; 0054e692
    MOV dword ptr [EBX + 0x944],0x3e800000 ; 0054e69c
    MOV dword ptr [EBX + 0xae8],0x40200000 ; 0054e6a6
    MOV dword ptr [EBX + 0xaec],0xc0200000 ; 0054e6b0
    MOV dword ptr [EBX + 0xaf0],0x40a00000 ; 0054e6ba
    MOV dword ptr [EBX + 0xaf4],0x3fa00000 ; 0054e6c4
    MOV dword ptr [EBX + 0xaf8],0x3e800000 ; 0054e6ce
    MOV dword ptr [EBX + 0xc9c],0xc0200000 ; 0054e6d8
    MOV dword ptr [EBX + 0xca0],0xc0200000 ; 0054e6e2
    MOV dword ptr [EBX + 0xca4],0xc0900000 ; 0054e6ec
    MOV dword ptr [EBX + 0xca8],0x3fa00000 ; 0054e6f6
    MOV dword ptr [EBX + 0xcac],0x3e800000 ; 0054e700
    MOV dword ptr [EBX + 0xe50],0x40200000 ; 0054e70a
    MOV dword ptr [EBX + 0xe54],0xc0200000 ; 0054e714
    MOV dword ptr [EBX + 0xe58],0xc0900000 ; 0054e71e
    MOV dword ptr [EBX + 0xe5c],0x3fa00000 ; 0054e728
    MOV dword ptr [EBX + 0xe60],0x3e800000 ; 0054e732
    LEA EAX,[EBX + 0x8c8]               ; 0054e73c
    MOV dword ptr [EBX + 0x910],0x44fa0000 ; 0054e742
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e74c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e753
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e756
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e759
    MOV dword ptr [EAX],EDX             ; 0054e75c
    LEA EAX,[EBX + 0x8bc]               ; 0054e75e
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e764
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e76b
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e76e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e771
    MOV dword ptr [EAX],EDX             ; 0054e774
    LEA EAX,[EBX + 0x8ec]               ; 0054e776
    MOV dword ptr [EAX + 0x8],0x0       ; 0054e77c
    MOV ESI,0x5972fc                    ; 0054e783 | = "chicpath.pth"
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e788
    MOV dword ptr [EAX + 0x4],EDX       ; 0054e78b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e78e
    MOV dword ptr [EAX],EDX             ; 0054e791
    MOV dword ptr [EBX + 0x1024],0x0    ; 0054e793
    LEA EDI,[EBX + 0x102c]              ; 0054e79d
    MOV dword ptr [EBX + 0x1028],0x42c80000 ; 0054e7a3
    PUSH EDI                            ; 0054e7ad
    MOV AL,byte ptr [ESI]               ; 0054e7ae | = "chicpath.pth" | s_icpath.pth_005972fc+2
        ;   Label: LAB_0054e7ae
    MOV byte ptr [EDI],AL               ; 0054e7b0
    CMP AL,0x0                          ; 0054e7b2
    JZ 0x0054e7c6                       ; 0054e7b4
        ;   XREF to: 0054e7c6 (CONDITIONAL_JUMP)  ; LAB_0054e7c6
    MOV AL,byte ptr [ESI + 0x1]         ; 0054e7b6 | s_hicpath.pth_005972fc+1 | s_cpath.pth_005972fc+3
    ADD ESI,0x2                         ; 0054e7b9
    MOV byte ptr [EDI + 0x1],AL         ; 0054e7bc
    ADD EDI,0x2                         ; 0054e7bf
    CMP AL,0x0                          ; 0054e7c2
    JNZ 0x0054e7ae                      ; 0054e7c4
        ;   XREF to: 0054e7ae (CONDITIONAL_JUMP)  ; LAB_0054e7ae
    POP EDI                             ; 0054e7c6
        ;   Label: LAB_0054e7c6
    MOV dword ptr [EBX + 0x1064],0x0    ; 0054e7c7
    MOV dword ptr [EBX + 0x1068],0x0    ; 0054e7d1
    MOV EAX,EBX                         ; 0054e7db
    MOV dword ptr [EBX + 0x106c],0x0    ; 0054e7dd
    POP EDI                             ; 0054e7e7
    POP ESI                             ; 0054e7e8
    POP EBX                             ; 0054e7e9
    RET                                 ; 0054e7ea

