; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_005557a0(CDemonSet *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_bugs.cpp_CBugs_renderOpaque_FUN_00425480 at 004255b8
;
; Referenced Globals:
;   undefined4 DAT_00605000
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005557a0
        ;   Label: core_set.cpp_CDemonSet_cacheMirrorLighting_FUN_005557a0
    SUB ESP,0xc                         ; 005557a1
    MOV ESI,dword ptr [ESP + 0x14]      ; 005557a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005557a8
    TEST EAX,EAX                        ; 005557ac
    JNZ 0x005557bb                      ; 005557ae
        ;   XREF to: 005557bb (CONDITIONAL_JUMP)  ; LAB_005557bb
    MOV dword ptr [ESI + 0x161670],EAX  ; 005557b0
    ADD ESP,0xc                         ; 005557b6
    POP ESI                             ; 005557b9
    RET                                 ; 005557ba
    PUSH EBX                            ; 005557bb
        ;   Label: LAB_005557bb
    LEA EBX,[ESP + 0x4]                 ; 005557bc
    FLD float ptr [EAX]                 ; 005557c0
    FMUL float ptr [0x00605000]         ; 005557c2 | DAT_00605000
    FISTP dword ptr [EBX]               ; 005557c8
    FLD float ptr [EAX + 0x4]           ; 005557ca
    FMUL float ptr [0x00605000]         ; 005557cd | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 005557d3
    FLD float ptr [EAX + 0x8]           ; 005557d6
    FMUL float ptr [0x00605000]         ; 005557d9 | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 005557df
    PUSH 0x0                            ; 005557e2
    PUSH 0x0                            ; 005557e4
    PUSH 0x0                            ; 005557e6
    LEA EBX,[ESP + 0x10]                ; 005557e8
    PUSH EBX                            ; 005557ec
    PUSH ESI                            ; 005557ed
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 005557ee
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EBX,dword ptr [0x00629034]      ; 005557f3 | DAT_00629034
    MOV dword ptr [ESI + 0x161670],0x1  ; 005557f9
    MOV EAX,[0x0062903c]                ; 00555803 | DAT_0062903c
    MOV dword ptr [ESI + 0x161674],EBX  ; 00555808
    MOV dword ptr [ESI + 0x16167c],EAX  ; 0055580e
    MOV EBX,dword ptr [0x00629038]      ; 00555814 | DAT_00629038
    ADD ESP,0x14                        ; 0055581a
    MOV dword ptr [ESI + 0x161678],EBX  ; 0055581d
    POP EBX                             ; 00555823
    ADD ESP,0xc                         ; 00555824
    POP ESI                             ; 00555827
    RET                                 ; 00555828

