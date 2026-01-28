; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void)
;
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 at 004715c6
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 at 00473a14
;
; Referenced Globals:
;   int[240] g_CoronaLeftExtent
;   undefined4 DAT_01576fac
;   int[240] g_CoronaRightExtent
;   undefined4 DAT_0157736c
;   int[240][320] g_CoronaDepthBuffer
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH 0x4b000                        ; 004502e0
        ;   Label: core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
    PUSH 0x7f                           ; 004502e5
    PUSH 0x1577728                      ; 004502e7 | g_CoronaDepthBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 004502ec
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ECX,0x13f                       ; 004502f1
    ADD ESP,0xc                         ; 004502f6
    XOR EAX,EAX                         ; 004502f9
    ADD EAX,0x4                         ; 004502fb
        ;   Label: LAB_004502fb
    XOR EDX,EDX                         ; 004502fe
    MOV dword ptr [EAX + 0x1577364],ECX ; 00450300 | g_CoronaRightExtent | DAT_0157736c
    MOV dword ptr [EAX + 0x1576fa4],EDX ; 00450306 | g_CoronaLeftExtent | DAT_01576fac
    CMP EAX,0x3c0                       ; 0045030c
    JNZ 0x004502fb                      ; 00450311
        ;   XREF to: 004502fb (CONDITIONAL_JUMP)  ; LAB_004502fb
    RET                                 ; 00450313

