; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0050e370(CDemonSet *this_ptr,CVector3f *position)
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
;   core_bugs.cpp_FUN_00421540 at 00421641
;
; Referenced Globals:
;   undefined4 DAT_005a18f0
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050e370
        ;   Label: core_set.cpp_FUN_0050e370
    SUB ESP,0xc                         ; 0050e371
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050e374
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e378
    TEST EAX,EAX                        ; 0050e37c
    JNZ 0x0050e38b                      ; 0050e37e
        ;   XREF to: 0050e38b (CONDITIONAL_JUMP)  ; LAB_0050e38b
    MOV dword ptr [ESI + 0x161270],EAX  ; 0050e380
    ADD ESP,0xc                         ; 0050e386
    POP ESI                             ; 0050e389
    RET                                 ; 0050e38a
    PUSH EBX                            ; 0050e38b
        ;   Label: LAB_0050e38b
    LEA EBX,[ESP + 0x4]                 ; 0050e38c
    FLD float ptr [EAX]                 ; 0050e390
    FMUL float ptr [0x005a18f0]         ; 0050e392 | DAT_005a18f0
    FISTP dword ptr [EBX]               ; 0050e398
    FLD float ptr [EAX + 0x4]           ; 0050e39a
    FMUL float ptr [0x005a18f0]         ; 0050e39d | DAT_005a18f0
    FISTP dword ptr [EBX + 0x4]         ; 0050e3a3
    FLD float ptr [EAX + 0x8]           ; 0050e3a6
    FMUL float ptr [0x005a18f0]         ; 0050e3a9 | DAT_005a18f0
    FISTP dword ptr [EBX + 0x8]         ; 0050e3af
    PUSH 0x0                            ; 0050e3b2
    PUSH 0x0                            ; 0050e3b4
    PUSH 0x0                            ; 0050e3b6
    LEA EBX,[ESP + 0x10]                ; 0050e3b8
    PUSH EBX                            ; 0050e3bc
    PUSH ESI                            ; 0050e3bd
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050e3be
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EBX,dword ptr [0x005c5034]      ; 0050e3c3 | DAT_005c5034
    MOV dword ptr [ESI + 0x161270],0x1  ; 0050e3c9
    MOV EAX,[0x005c503c]                ; 0050e3d3 | DAT_005c503c
    MOV dword ptr [ESI + 0x161274],EBX  ; 0050e3d8
    MOV dword ptr [ESI + 0x16127c],EAX  ; 0050e3de
    MOV EBX,dword ptr [0x005c5038]      ; 0050e3e4 | DAT_005c5038
    ADD ESP,0x14                        ; 0050e3ea
    MOV dword ptr [ESI + 0x161278],EBX  ; 0050e3ed
    POP EBX                             ; 0050e3f3
    ADD ESP,0xc                         ; 0050e3f4
    POP ESI                             ; 0050e3f7
    RET                                 ; 0050e3f8

