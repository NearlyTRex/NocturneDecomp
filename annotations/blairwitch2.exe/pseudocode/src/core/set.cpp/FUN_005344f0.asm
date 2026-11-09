; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_005344f0(CDemonSet *this_ptr,CVector3f *position)
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
;   core_bugs.cpp_FUN_0041f450 at 0041f588
;
; Referenced Globals:
;   undefined4 DAT_005fb210
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005344f0
        ;   Label: core_set.cpp_FUN_005344f0
    SUB ESP,0xc                         ; 005344f1
    MOV ESI,dword ptr [ESP + 0x14]      ; 005344f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005344f8
    TEST EAX,EAX                        ; 005344fc
    JNZ 0x0053450b                      ; 005344fe
        ;   XREF to: 0053450b (CONDITIONAL_JUMP)  ; LAB_0053450b
    MOV dword ptr [ESI + 0x16166c],EAX  ; 00534500
    ADD ESP,0xc                         ; 00534506
    POP ESI                             ; 00534509
    RET                                 ; 0053450a
    PUSH EBX                            ; 0053450b
        ;   Label: LAB_0053450b
    LEA EBX,[ESP + 0x4]                 ; 0053450c
    FLD float ptr [EAX]                 ; 00534510
    FMUL float ptr [0x005fb210]         ; 00534512 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 00534518
    FLD float ptr [EAX + 0x4]           ; 0053451a
    FMUL float ptr [0x005fb210]         ; 0053451d | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 00534523
    FLD float ptr [EAX + 0x8]           ; 00534526
    FMUL float ptr [0x005fb210]         ; 00534529 | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 0053452f
    PUSH 0x0                            ; 00534532
    PUSH 0x0                            ; 00534534
    PUSH 0x0                            ; 00534536
    LEA EBX,[ESP + 0x10]                ; 00534538
    PUSH EBX                            ; 0053453c
    PUSH ESI                            ; 0053453d
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460 ; 0053453e
        ;   XREF to: 00531460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EBX,dword ptr [0x00622034]      ; 00534543 | DAT_00622034
    MOV dword ptr [ESI + 0x16166c],0x1  ; 00534549
    MOV EAX,[0x0062203c]                ; 00534553 | DAT_0062203c
    MOV dword ptr [ESI + 0x161670],EBX  ; 00534558
    MOV dword ptr [ESI + 0x161678],EAX  ; 0053455e
    MOV EBX,dword ptr [0x00622038]      ; 00534564 | DAT_00622038
    ADD ESP,0x14                        ; 0053456a
    MOV dword ptr [ESI + 0x161674],EBX  ; 0053456d
    POP EBX                             ; 00534573
    ADD ESP,0xc                         ; 00534574
    POP ESI                             ; 00534577
    RET                                 ; 00534578

