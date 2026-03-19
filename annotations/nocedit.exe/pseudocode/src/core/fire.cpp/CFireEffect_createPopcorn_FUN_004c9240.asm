; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
;
; XREF[1]:
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a8540
;
; Referenced Globals:
;   int g_PopcornAllocIndex
;   CPopcorn[256] g_PopcornPool
;   undefined4 g_PopcornPool[0].base.vtable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9240
        ;   Label: core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240
    PUSH ESI                            ; 004c9241
    PUSH EBP                            ; 004c9242
    MOV EAX,[0x02d736bc]                ; 004c9243 | g_PopcornAllocIndex
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c9248
    SHL EAX,0x3                         ; 004c924c
    PUSH ECX                            ; 004c924f
    MOV EDX,EAX                         ; 004c9250
    SHL EAX,0x3                         ; 004c9252
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c9255
    SUB EAX,EDX                         ; 004c9259
    PUSH EBX                            ; 004c925b
    ADD EAX,0x2d736c0                   ; 004c925c | g_PopcornPool
    PUSH EAX                            ; 004c9261
    MOV EDX,dword ptr [EAX + 0x34]      ; 004c9262 | g_PopcornPool[0].base.vtable
    CALL dword ptr [EDX]                ; 004c9265
    MOV ESI,dword ptr [0x02d736bc]      ; 004c9267 | g_PopcornAllocIndex
    INC ESI                             ; 004c926d
    ADD ESP,0xc                         ; 004c926e
    MOV dword ptr [0x02d736bc],ESI      ; 004c9271 | g_PopcornAllocIndex
    CMP ESI,0x100                       ; 004c9277
    JGE 0x004c9283                      ; 004c927d
        ;   XREF to: 004c9283 (CONDITIONAL_JUMP)  ; LAB_004c9283
    POP EBP                             ; 004c927f
    POP ESI                             ; 004c9280
    POP EBX                             ; 004c9281
    RET                                 ; 004c9282
    XOR EBP,EBP                         ; 004c9283
        ;   Label: LAB_004c9283
    MOV dword ptr [0x02d736bc],EBP      ; 004c9285 | g_PopcornAllocIndex
    POP EBP                             ; 004c928b
    POP ESI                             ; 004c928c
    POP EBX                             ; 004c928d
    RET                                 ; 004c928e

