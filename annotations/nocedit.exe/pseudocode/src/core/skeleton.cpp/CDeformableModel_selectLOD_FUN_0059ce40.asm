; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   bounding_box
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_FUN_0042af60 at 0042b045
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 at 005a01a8
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ce40
        ;   Label: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
    PUSH EBP                            ; 0059ce41
    SUB ESP,0x8                         ; 0059ce42
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059ce45
    MOV EDX,dword ptr [0x006703ec]      ; 0059ce49 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0059ce4f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0059ce50 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0059ce55
    TEST EAX,EAX                        ; 0059ce58
    JNZ 0x0059ce67                      ; 0059ce5a | LAB_0059ce67
        ;   XREF to: 0059ce67 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX],0x1             ; 0059ce5c
    JG 0x0059ce6c                       ; 0059ce5f | LAB_0059ce6c
        ;   XREF to: 0059ce6c (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 0059ce61
        ;   Label: LAB_0059ce61
    POP EBP                             ; 0059ce64
    POP EBX                             ; 0059ce65
    RET                                 ; 0059ce66
    MOV EAX,dword ptr [EBX]             ; 0059ce67
        ;   Label: LAB_0059ce67
    DEC EAX                             ; 0059ce69
    JMP 0x0059ce61                      ; 0059ce6a | LAB_0059ce61
        ;   XREF to: 0059ce61 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 0059ce6c
        ;   Label: LAB_0059ce6c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059ce6d
    PUSH ESI                            ; 0059ce71
    CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840 ; 0059ce72 | float core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D * this_ptr)
        ;   XREF to: 00420840 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xc],EAX       ; 0059ce77
    MOV ECX,dword ptr [EBX]             ; 0059ce7b
    FLD float ptr [ESP + 0xc]           ; 0059ce7d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0059ce81 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0059ce86
    DEC ECX                             ; 0059ce89
    FISTP dword ptr [ESP + 0x4]         ; 0059ce8a
    TEST ECX,ECX                        ; 0059ce8e
    JLE 0x0059cead                      ; 0059ce90 | LAB_0059cead
        ;   XREF to: 0059cead (CONDITIONAL_JUMP)
    LEA EDX,[ECX*0x8 + 0x0]             ; 0059ce92
    MOV EBP,dword ptr [ESP + 0x4]       ; 0059ce99
    ADD EDX,EBX                         ; 0059ce9d
    CMP dword ptr [EDX + 0x8],0x0       ; 0059ce9f
        ;   Label: LAB_0059ce9f
    JZ 0x0059ceb6                       ; 0059cea3 | LAB_0059ceb6
        ;   XREF to: 0059ceb6 (CONDITIONAL_JUMP)
    DEC ECX                             ; 0059cea5
        ;   Label: LAB_0059cea5
    SUB EDX,0x8                         ; 0059cea6
    TEST ECX,ECX                        ; 0059cea9
    JG 0x0059ce9f                       ; 0059ceab | LAB_0059ce9f
        ;   XREF to: 0059ce9f (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 0059cead
        ;   Label: LAB_0059cead
    POP ESI                             ; 0059ceaf
    ADD ESP,0x8                         ; 0059ceb0
    POP EBP                             ; 0059ceb3
    POP EBX                             ; 0059ceb4
    RET                                 ; 0059ceb5
    CMP EBP,dword ptr [EDX + 0x4]       ; 0059ceb6
        ;   Label: LAB_0059ceb6
    JL 0x0059cead                       ; 0059ceb9 | LAB_0059cead
        ;   XREF to: 0059cead (CONDITIONAL_JUMP)
    JMP 0x0059cea5                      ; 0059cebb | LAB_0059cea5
        ;   XREF to: 0059cea5 (UNCONDITIONAL_JUMP)

