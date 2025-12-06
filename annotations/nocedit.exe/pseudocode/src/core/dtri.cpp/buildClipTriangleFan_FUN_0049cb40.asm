; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonTriangle * core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049cb40
        ;   Label: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb40
    SUB ESP,0x4                         ; 0049cb41
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049cb44
    PUSH EDX                            ; 0049cb48
    CALL core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30 ; 0049cb49 | int core_dtri.cpp_getClippedTriangleCount_FUN_0049cb30()
        ;   XREF to: 0049cb30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049cb4e
    XOR EBP,EBP                         ; 0049cb51
    MOV dword ptr [ESP],EAX             ; 0049cb53
    TEST EAX,EAX                        ; 0049cb56
    JLE 0x0049cb97                      ; 0049cb58 | LAB_0049cb97
        ;   XREF to: 0049cb97 (CONDITIONAL_JUMP)

