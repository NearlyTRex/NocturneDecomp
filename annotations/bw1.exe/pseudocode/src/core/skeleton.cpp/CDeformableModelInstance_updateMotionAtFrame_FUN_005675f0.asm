; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
;
; XREF[4]:
;   core_doc.cpp_FUN_00469060 at 0046929b
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0 at 00569cfe
;   core_stranger.cpp_FUN_00585670 at 005858ab
;   core_thehand.cpp_FUN_00599150 at 0059955d
;
; Called Functions:
;   core_skeleton.cpp_FUN_00567620
;   core_skeleton.cpp_FUN_00569180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005675f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
    PUSH -0x1                           ; 005675f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 005675f3
    PUSH dword ptr [ESP + 0x14]         ; 005675f7
    PUSH EDX                            ; 005675fb
    MOV ECX,dword ptr [ESP + 0x14]      ; 005675fc
    PUSH ECX                            ; 00567600
    CALL core_skeleton.cpp_FUN_00567620 ; 00567601
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00567620()
    ADD ESP,0x10                        ; 00567606
    MOV EBX,dword ptr [ESP + 0x8]       ; 00567609
    PUSH EBX                            ; 0056760d
    CALL core_skeleton.cpp_FUN_00569180 ; 0056760e
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567613
    POP EBX                             ; 00567616
    RET                                 ; 00567617

