; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_00570cd0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0 at 004252af
;
; Referenced Globals:
;   float FLOAT_00662850 = 256
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00570cd0
        ;   Label: core_set.cpp_CDemonSet_FUN_00570cd0
    SUB ESP,0xc                         ; 00570cd1
    MOV ESI,dword ptr [ESP + 0x14]      ; 00570cd4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00570cd8
    TEST EAX,EAX                        ; 00570cdc
    JNZ 0x00570ceb                      ; 00570cde
        ;   XREF to: 00570ceb (CONDITIONAL_JUMP)  ; LAB_00570ceb
    MOV dword ptr [ESI + 0x161658],EAX  ; 00570ce0
    ADD ESP,0xc                         ; 00570ce6
    POP ESI                             ; 00570ce9
    RET                                 ; 00570cea
    PUSH EBX                            ; 00570ceb
        ;   Label: LAB_00570ceb
    LEA EBX,[ESP + 0x4]                 ; 00570cec
    FLD float ptr [EAX]                 ; 00570cf0
    FMUL float ptr [0x00662850]         ; 00570cf2 | FLOAT_00662850
    FISTP dword ptr [EBX]               ; 00570cf8
    FLD float ptr [EAX + 0x4]           ; 00570cfa
    FMUL float ptr [0x00662850]         ; 00570cfd | FLOAT_00662850
    FISTP dword ptr [EBX + 0x4]         ; 00570d03
    FLD float ptr [EAX + 0x8]           ; 00570d06
    FMUL float ptr [0x00662850]         ; 00570d09 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x8]         ; 00570d0f
    PUSH 0x0                            ; 00570d12
    PUSH 0x0                            ; 00570d14
    PUSH 0x0                            ; 00570d16
    LEA EBX,[ESP + 0x10]                ; 00570d18
    PUSH EBX                            ; 00570d1c
    PUSH ESI                            ; 00570d1d
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 ; 00570d1e
        ;   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EBX,dword ptr [0x00688034]      ; 00570d23 | g_RenderVertexBuffer[0].light
    MOV dword ptr [ESI + 0x161658],0x1  ; 00570d29
    MOV EAX,[0x0068803c]                ; 00570d33 | g_RenderVertexBuffer[0].fog
    MOV dword ptr [ESI + 0x16165c],EBX  ; 00570d38
    MOV dword ptr [ESI + 0x161664],EAX  ; 00570d3e
    MOV EBX,dword ptr [0x00688038]      ; 00570d44 | g_RenderVertexBuffer[0].color
    ADD ESP,0x14                        ; 00570d4a
    MOV dword ptr [ESI + 0x161660],EBX  ; 00570d4d
    POP EBX                             ; 00570d53
    ADD ESP,0xc                         ; 00570d54
    POP ESI                             ; 00570d57
    RET                                 ; 00570d58

