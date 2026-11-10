; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoc * core_doc_cpp_CDoc_ctor_FUN_00468c80(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_doc.cpp_factoryFuncDoc_FUN_00468c50 at 00468c63
;
; Referenced Globals:
;   undefined4 DAT_005fecb8
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320
;   core_cloth.cpp_CClothList_add_FUN_00441de0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_hero.cpp_CHero_ctor_FUN_004ea830
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468c80
        ;   Label: core_doc.cpp_CDoc_ctor_FUN_00468c80
    PUSH EBP                            ; 00468c81
    MOV EBP,ESP                         ; 00468c82
    MOV EDX,dword ptr [EBP + 0xc]       ; 00468c84
    PUSH EDX                            ; 00468c87
    CALL core_hero.cpp_CHero_ctor_FUN_004ea830 ; 00468c88
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004ea830(CHero * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5fece4 ; 00468c8d
    MOV dword ptr [EAX + 0x1ffac],0x0   ; 00468c97
    MOV dword ptr [EAX + 0x1ffb0],0x0   ; 00468ca1
    MOV dword ptr [EAX + 0x1ffb4],0x0   ; 00468cab
    MOV dword ptr [EAX + 0x1ffb8],0xbf060a92 ; 00468cb5
    MOV dword ptr [EAX + 0x1ffd8],0x0   ; 00468cbf
    MOV dword ptr [EAX + 0x1ffd0],0x0   ; 00468cc9
    MOV EBX,EAX                         ; 00468cd3
    MOV dword ptr [EAX + 0x1ffc8],0x0   ; 00468cd5
    MOV EDX,dword ptr [EBX + 0x1ffc8]   ; 00468cdf
    MOV dword ptr [EAX + 0x1ffcc],EDX   ; 00468ce5
    MOV dword ptr [EAX + 0x1ffc0],0x0   ; 00468ceb
    ADD EAX,0x158                       ; 00468cf5
    FLD float ptr [EBX + 0x1ffc0]       ; 00468cfa
    MOV dword ptr [EAX + 0x1fe7c],0x0   ; 00468d00
    MOV dword ptr [EAX + 0x1fe84],0x0   ; 00468d0a
    MOV dword ptr [EAX + 0x1fea0],0x0   ; 00468d14
    MOV dword ptr [EAX + 0x1fe98],0x0   ; 00468d1e
    MOV dword ptr [EAX + 0x1fe90],0x0   ; 00468d28
    FSTP float ptr [EAX + 0x1fe6c]      ; 00468d32
    FLD float ptr [EBX + 0x1ffe8]       ; 00468d38
    MOV dword ptr [EAX + 0x1fe88],0x0   ; 00468d3e
    FSTP float ptr [EAX + 0x1fe94]      ; 00468d48
    FLD float ptr [EBX + 0x1ffe0]       ; 00468d4e
    MOV dword ptr [EAX + 0x1fe9c],0x0   ; 00468d54
    MOV dword ptr [EAX + 0x1fea4],0x0   ; 00468d5e
    MOV dword ptr [EAX + 0x1ff08],0x0   ; 00468d68
    MOV dword ptr [EAX + 0x1fea8],0x0   ; 00468d72
    MOV dword ptr [EAX + 0x1feb0],0x0   ; 00468d7c
    ADD ESP,0x4                         ; 00468d86
    MOV dword ptr [EAX + 0x1feb8],0x0   ; 00468d89
    PUSH 0x5d98a4                       ; 00468d93
    MOV dword ptr [EAX + 0x1febc],0x0   ; 00468d98
    FLD float ptr [0x005fecb8]          ; 00468da2 | DAT_005fecb8
    MOV dword ptr [EAX + 0x1ff2c],0xf149f2ca ; 00468da8
    PUSH EAX                            ; 00468db2
    FXCH                                ; 00468db3
    FSTP float ptr [EAX + 0x1fe8c]      ; 00468db5
    FSTP float ptr [EAX + 0x1fe64]      ; 00468dbb
    MOV dword ptr [EAX + 0x1ff14],0xf149f2ca ; 00468dc1
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00468dcb
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2c98],0x0    ; 00468dd0
    MOV dword ptr [EBX + 0x20004],0x0   ; 00468dda
    MOV dword ptr [EBX + 0x20024],0x0   ; 00468de4
    LEA EAX,[EBX + 0x2004c]             ; 00468dee
    MOV dword ptr [EBX + 0x20028],0x0   ; 00468df4
    MOV dword ptr [EAX + 0x8],0x0       ; 00468dfe
    MOV EDX,dword ptr [EAX + 0x8]       ; 00468e05
    MOV dword ptr [EAX + 0x4],EDX       ; 00468e08
    MOV EDX,dword ptr [EAX + 0x4]       ; 00468e0b
    MOV dword ptr [EAX],EDX             ; 00468e0e
    MOV dword ptr [EBX + 0x20058],0xffffffff ; 00468e10
    MOV dword ptr [EBX + 0x2000c],0x0   ; 00468e1a
    MOV dword ptr [EBX + 0x2002c],0x0   ; 00468e24
    MOV dword ptr [EBX + 0x20030],0x0   ; 00468e2e
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00468e38
    ADD ESP,0x8                         ; 00468e42
    MOV dword ptr [EBX + 0x2005c],0x0   ; 00468e45
    LEA EAX,[EBX + 0x1fae8]             ; 00468e4f
    MOV dword ptr [EBX + 0x20064],0x0   ; 00468e55
    PUSH 0x5d98af                       ; 00468e5f
    MOV EAX,dword ptr [EAX + 0x338]     ; 00468e64
    ADD EAX,0x158                       ; 00468e6a
    PUSH EAX                            ; 00468e6f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00468e70
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00468e75
    PUSH 0x0                            ; 00468e78
    PUSH 0x5d98bd                       ; 00468e7a
    PUSH 0x1                            ; 00468e7f
    PUSH 0x0                            ; 00468e81
    PUSH EBX                            ; 00468e83
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468e84
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468e89
    PUSH 0x0                            ; 00468e8c
    PUSH 0x5d98d1                       ; 00468e8e
    PUSH 0x2                            ; 00468e93
    PUSH 0x1                            ; 00468e95
    PUSH EBX                            ; 00468e97
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468e98
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468e9d
    PUSH 0x0                            ; 00468ea0
    PUSH 0x5d98ea                       ; 00468ea2
    PUSH 0x3                            ; 00468ea7
    PUSH 0x0                            ; 00468ea9
    PUSH EBX                            ; 00468eab
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468eac
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468eb1
    PUSH 0x0                            ; 00468eb4
    PUSH 0x5d9900                       ; 00468eb6
    PUSH 0x4                            ; 00468ebb
    PUSH 0x3                            ; 00468ebd
    PUSH EBX                            ; 00468ebf
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468ec0
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468ec5
    PUSH 0x0                            ; 00468ec8
    PUSH 0x5d991b                       ; 00468eca
    PUSH 0x5                            ; 00468ecf
    PUSH 0x3                            ; 00468ed1
    PUSH EBX                            ; 00468ed3
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468ed4
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468ed9
    PUSH 0x0                            ; 00468edc
    PUSH 0x5d993b                       ; 00468ede
    PUSH 0x3                            ; 00468ee3
    PUSH 0x1                            ; 00468ee5
    PUSH EBX                            ; 00468ee7
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468ee8
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468eed
    PUSH 0x1                            ; 00468ef0
    PUSH 0x5d9954                       ; 00468ef2
    PUSH 0x6                            ; 00468ef7
    PUSH 0x0                            ; 00468ef9
    PUSH EBX                            ; 00468efb
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468efc
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f01
    PUSH 0x1                            ; 00468f04
    PUSH 0x5d9967                       ; 00468f06
    PUSH 0x0                            ; 00468f0b
    PUSH 0x6                            ; 00468f0d
    PUSH EBX                            ; 00468f0f
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f10
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f15
    PUSH 0x1                            ; 00468f18
    PUSH 0x5d997a                       ; 00468f1a
    PUSH 0x4                            ; 00468f1f
    PUSH 0xc                            ; 00468f21
    PUSH EBX                            ; 00468f23
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f24
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f29
    PUSH 0x0                            ; 00468f2c
    PUSH 0x5d998d                       ; 00468f2e
    PUSH 0x7                            ; 00468f33
    PUSH 0x3                            ; 00468f35
    PUSH EBX                            ; 00468f37
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f38
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f3d
    PUSH 0x0                            ; 00468f40
    PUSH 0x5d99a6                       ; 00468f42
    PUSH 0x7                            ; 00468f47
    PUSH 0x7                            ; 00468f49
    PUSH EBX                            ; 00468f4b
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f4c
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f51
    PUSH 0x0                            ; 00468f54
    PUSH 0x5d99b7                       ; 00468f56
    PUSH 0x8                            ; 00468f5b
    PUSH 0x0                            ; 00468f5d
    PUSH EBX                            ; 00468f5f
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f60
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f65
    PUSH 0x1                            ; 00468f68
    PUSH 0x5d99cc                       ; 00468f6a
    PUSH 0x8                            ; 00468f6f
    PUSH 0xd                            ; 00468f71
    PUSH EBX                            ; 00468f73
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f74
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f79
    PUSH 0x1                            ; 00468f7c
    PUSH 0x5d99db                       ; 00468f7e
    PUSH 0x8                            ; 00468f83
    PUSH 0xd                            ; 00468f85
    PUSH EBX                            ; 00468f87
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f88
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468f8d
    PUSH 0x0                            ; 00468f90
    PUSH 0x5d99f3                       ; 00468f92
    PUSH 0x9                            ; 00468f97
    PUSH 0x9                            ; 00468f99
    PUSH EBX                            ; 00468f9b
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468f9c
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468fa1
    PUSH 0x0                            ; 00468fa4
    PUSH 0x5d9a02                       ; 00468fa6
    PUSH 0xa                            ; 00468fab
    PUSH 0x3                            ; 00468fad
    PUSH EBX                            ; 00468faf
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468fb0
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468fb5
    PUSH 0x0                            ; 00468fb8
    PUSH 0x5d9a1a                       ; 00468fba
    PUSH 0x0                            ; 00468fbf
    PUSH 0xa                            ; 00468fc1
    PUSH EBX                            ; 00468fc3
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468fc4
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468fc9
    PUSH 0x0                            ; 00468fcc
    PUSH 0x5d9a2d                       ; 00468fce
    PUSH 0xe                            ; 00468fd3
    PUSH 0x3                            ; 00468fd5
    PUSH EBX                            ; 00468fd7
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468fd8
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468fdd
    PUSH 0x0                            ; 00468fe0
    PUSH 0x5d9a46                       ; 00468fe2
    PUSH 0xe                            ; 00468fe7
    PUSH 0xf                            ; 00468fe9
    PUSH EBX                            ; 00468feb
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00468fec
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00468ff1
    PUSH 0x0                            ; 00468ff4
    PUSH 0x5d9a55                       ; 00468ff6
    PUSH 0x10                           ; 00468ffb
    PUSH 0x1                            ; 00468ffd
    PUSH EBX                            ; 00468fff
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00469000
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00469005
    PUSH 0x0                            ; 00469008
    PUSH 0x5d9a71                       ; 0046900a
    PUSH 0xb                            ; 0046900f
    PUSH 0x3                            ; 00469011
    PUSH EBX                            ; 00469013
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00469014
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00469019
    PUSH 0x0                            ; 0046901c
    PUSH 0x5d9a89                       ; 0046901e
    PUSH 0x0                            ; 00469023
    PUSH 0xb                            ; 00469025
    PUSH EBX                            ; 00469027
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320 ; 00469028
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0046902d
    PUSH 0x5d9a9c                       ; 00469030
    LEA EAX,[EBX + 0x2ca0]              ; 00469035
    PUSH EAX                            ; 0046903b
    CALL core_cloth.cpp_CClothList_add_FUN_00441de0 ; 0046903c
        ;   XREF to: 00441de0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_00441de0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00469041
    MOV EAX,EBX                         ; 00469044
    MOV dword ptr [EBX + 0x200e0],0x0   ; 00469046
    POP EBP                             ; 00469050
    POP EBX                             ; 00469051
    RET                                 ; 00469052

