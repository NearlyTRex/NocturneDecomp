; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
;
; XREF[3]:
;   core_prye.cpp_FUN_00518680 at 0051890f
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850 at 0054e88e
;   core_thehand.cpp_FUN_0056c140 at 0056c554
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054c1b0
;   core_skeleton.cpp_FUN_0054dd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c180
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
    PUSH -0x1                           ; 0054c181
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054c183
    PUSH dword ptr [ESP + 0x14]         ; 0054c187
    PUSH EDX                            ; 0054c18b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054c18c
    PUSH ECX                            ; 0054c190
    CALL core_skeleton.cpp_FUN_0054c1b0 ; 0054c191
        ;   XREF to: 0054c1b0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054c1b0()
    ADD ESP,0x10                        ; 0054c196
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c199
    PUSH EBX                            ; 0054c19d
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0054c19e
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054c1a3
    POP EBX                             ; 0054c1a6
    RET                                 ; 0054c1a7

