; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   start_vertex_index
; int              Stack[0x14]:4   vertex_count
;
; XREF[8]:
;   core_chain.cpp_FUN_0042a280 at 0042a5a3
;   core_fire.cpp_CPopcorn_render_FUN_004a0cd0 at 004a0fa5
;   core_fire.cpp_CSmokeParticle_render_FUN_00496f60 at 00497224
;   core_fire.cpp_FUN_00497610 at 004979fe
;   core_fire.cpp_FUN_0049a9f0 at 0049ab80
;   core_fire.cpp_FUN_004a1040 at 004a134f
;   core_gore.cpp_FUN_004ccbe0 at 004cceab
;   core_weather.cpp_FUN_0057c890 at 0057caf1
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   undefined4 DAT_0060b094
;   undefined4 DAT_0060b098
;   undefined4 DAT_0060b09c
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_005380a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538400
        ;   Label: core_set.cpp_CDemonSet_computeLighting_FUN_00538400
    PUSH ESI                            ; 00538401
    PUSH EDI                            ; 00538402
    MOV EBX,dword ptr [ESP + 0x20]      ; 00538403
    PUSH 0x0                            ; 00538407
    MOV EDX,dword ptr [ESP + 0x20]      ; 00538409
    PUSH EDX                            ; 0053840d
    MOV ECX,dword ptr [ESP + 0x20]      ; 0053840e
    PUSH ECX                            ; 00538412
    MOV ESI,dword ptr [ESP + 0x20]      ; 00538413
    PUSH ESI                            ; 00538417
    MOV EDI,dword ptr [ESP + 0x20]      ; 00538418
    PUSH EDI                            ; 0053841c
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_005380a0 ; 0053841d
        ;   XREF to: 005380a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_005380a0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 00538422
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00538425
    LEA EAX,[EDX*0x4 + 0x0]             ; 00538429
    SUB EAX,EDX                         ; 00538430
    MOV EDX,0x60b014                    ; 00538432 | DAT_0060b014
    SHL EAX,0x4                         ; 00538437
    ADD EDX,EAX                         ; 0053843a
    DEC EBX                             ; 0053843c
    LEA EAX,[EDX + 0x30]                ; 0053843d
    TEST EBX,EBX                        ; 00538440
    JLE 0x00538460                      ; 00538442
        ;   XREF to: 00538460 (CONDITIONAL_JUMP)  ; LAB_00538460
    MOV ECX,dword ptr [EDX + 0x20]      ; 00538444 | DAT_0060b034
        ;   Label: LAB_00538444
    MOV dword ptr [EAX + 0x20],ECX      ; 00538447 | DAT_0060b064 | DAT_0060b094
    MOV ECX,dword ptr [EDX + 0x24]      ; 0053844a | DAT_0060b038
    MOV dword ptr [EAX + 0x24],ECX      ; 0053844d | DAT_0060b068 | DAT_0060b098
    ADD EAX,0x30                        ; 00538450
    MOV ECX,dword ptr [EDX + 0x28]      ; 00538453 | DAT_0060b03c
    DEC EBX                             ; 00538456
    MOV dword ptr [EAX + -0x8],ECX      ; 00538457 | DAT_0060b06c | DAT_0060b09c
    TEST EBX,EBX                        ; 0053845a
    JG 0x00538444                       ; 0053845c
        ;   XREF to: 00538444 (CONDITIONAL_JUMP)  ; LAB_00538444
    MOV EAX,EAX                         ; 0053845e
    POP EDI                             ; 00538460
        ;   Label: LAB_00538460
    POP ESI                             ; 00538461
    POP EBX                             ; 00538462
    RET                                 ; 00538463

