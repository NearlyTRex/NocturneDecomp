; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb * this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 at 00574d3c
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574a31
;
; Referenced Globals:
;   uint*[1024] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00574e30
        ;   Label: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
    MOV EDX,dword ptr [ECX + 0x4]       ; 00574e34
    XOR EAX,EAX                         ; 00574e37
    TEST EDX,EDX                        ; 00574e39
    JLE 0x00574e61                      ; 00574e3b
        ;   XREF to: 00574e61 (CONDITIONAL_JUMP)  ; LAB_00574e61
    PUSH ESI                            ; 00574e3d
    PUSH EBX                            ; 00574e3e
    XOR EDX,EDX                         ; 00574e3f
    MOV EBX,dword ptr [ECX]             ; 00574e41
        ;   Label: LAB_00574e41
    IMUL EBX,EAX                        ; 00574e43
    MOV ESI,dword ptr [ECX + 0x24]      ; 00574e46
    SHL EBX,0x2                         ; 00574e49
    ADD EBX,ESI                         ; 00574e4c
    MOV dword ptr [EDX + 0x2cf7d5c],EBX ; 00574e4e | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    INC EAX                             ; 00574e54
    MOV EBX,dword ptr [ECX + 0x4]       ; 00574e55
    ADD EDX,0x4                         ; 00574e58
    CMP EAX,EBX                         ; 00574e5b
    JL 0x00574e41                       ; 00574e5d
        ;   XREF to: 00574e41 (CONDITIONAL_JUMP)  ; LAB_00574e41
    POP EBX                             ; 00574e5f
    POP ESI                             ; 00574e60
    RET                                 ; 00574e61
        ;   Label: LAB_00574e61

