; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_0059b800(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CMatrix3x4f *    Stack[0x8]:4   bone_matrices
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0 at 005a17f5
;
; Referenced Globals:
;   float FLOAT_00662e98 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_xform.cpp_getTranslation_FUN_005f6110
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b800
        ;   Label: core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800
    PUSH ESI                            ; 0059b801
    PUSH EDI                            ; 0059b802
    PUSH EBP                            ; 0059b803
    SUB ESP,0x1c                        ; 0059b804
    MOV EDX,dword ptr [ESP + 0x30]      ; 0059b807
    PUSH EDX                            ; 0059b80b
    XOR EDI,EDI                         ; 0059b80c
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0059b80e
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059b813
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059b816
    MOV dword ptr [ESP + 0x18],EAX      ; 0059b81c
    TEST ECX,ECX                        ; 0059b820
    JLE 0x0059b8af                      ; 0059b822
        ;   XREF to: 0059b8af (CONDITIONAL_JUMP)  ; LAB_0059b8af
    MOV EBP,dword ptr [ESP + 0x34]      ; 0059b828
    LEA ESI,[EAX + 0x2855c]             ; 0059b82c
    LEA EAX,[ESP + 0xc]                 ; 0059b832
        ;   Label: LAB_0059b832
    PUSH EAX                            ; 0059b836
    PUSH EBP                            ; 0059b837
    LEA EBX,[ESP + 0x8]                 ; 0059b838
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 0059b83c
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0059b841
    LEA EAX,[ESP + 0xc]                 ; 0059b844
    MOV EDX,dword ptr [0x006703ec]      ; 0059b848 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0059b84e
    FMUL float ptr [0x00662e98]         ; 0059b850 | FLOAT_00662e98
    FISTP dword ptr [EBX]               ; 0059b856
    FLD float ptr [EAX + 0x4]           ; 0059b858
    FMUL float ptr [0x00662e98]         ; 0059b85b | FLOAT_00662e98
    FISTP dword ptr [EBX + 0x4]         ; 0059b861
    FLD float ptr [EAX + 0x8]           ; 0059b864
    FMUL float ptr [0x00662e98]         ; 0059b867 | FLOAT_00662e98
    FISTP dword ptr [EBX + 0x8]         ; 0059b86d
    MOV EAX,ESP                         ; 0059b870
    PUSH EAX                            ; 0059b872
    MOV EAX,dword ptr [EDX]             ; 0059b873 | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 0059b875
    PUSH EAX                            ; 0059b87a
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0059b87b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0059b880 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0059b885 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 0059b887
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 0059b88a
    ADD EAX,0xea5d0                     ; 0059b890
    TEST DL,0x80                        ; 0059b895
    JZ 0x0059b8b7                       ; 0059b898
        ;   XREF to: 0059b8b7 (CONDITIONAL_JUMP)  ; LAB_0059b8b7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059b89a
        ;   Label: LAB_0059b89a
    ADD EBP,0x30                        ; 0059b89e
    INC EDI                             ; 0059b8a1
    MOV EBX,dword ptr [EAX + 0x28558]   ; 0059b8a2
    ADD ESI,0x24                        ; 0059b8a8
    CMP EDI,EBX                         ; 0059b8ab
    JL 0x0059b832                       ; 0059b8ad
        ;   XREF to: 0059b832 (CONDITIONAL_JUMP)  ; LAB_0059b832
    ADD ESP,0x1c                        ; 0059b8af
        ;   Label: LAB_0059b8af
    POP EBP                             ; 0059b8b2
    POP EDI                             ; 0059b8b3
    POP ESI                             ; 0059b8b4
    POP EBX                             ; 0059b8b5
    RET                                 ; 0059b8b6
    MOV EDX,dword ptr [EAX + 0x14]      ; 0059b8b7
        ;   Label: LAB_0059b8b7
    SAR EDX,0x10                        ; 0059b8ba
    MOV EAX,dword ptr [EAX + 0x10]      ; 0059b8bd
    PUSH EDX                            ; 0059b8c0
    SAR EAX,0x10                        ; 0059b8c1
    PUSH EAX                            ; 0059b8c4
    PUSH ESI                            ; 0059b8c5
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0059b8c6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0059b8cb
    JMP 0x0059b89a                      ; 0059b8ce
        ;   XREF to: 0059b89a (UNCONDITIONAL_JUMP)  ; LAB_0059b89a

