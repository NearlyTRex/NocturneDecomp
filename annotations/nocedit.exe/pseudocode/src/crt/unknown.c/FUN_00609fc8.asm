; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00609fc8()
;
;
; XREF[1]:
;   crt_unknown.c_staticFinal_FUN_0060a4cc at 0060a54d
;
; Referenced Globals:
;   DeleteCriticalSection* PTR_DeleteCriticalSection_00611520 = 00211caa
;   CRITICAL_SECTION[64] g_StaticCriticalSectionArray
;   undefined4 g_StaticCriticalSectionArray[1].DebugInfo
;   DWORD g_StaticCriticalSectionCounter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609fc8
        ;   Label: crt_unknown.c_FUN_00609fc8
    PUSH ESI                            ; 00609fc9
    MOV EDX,dword ptr [0x03f9c000]      ; 00609fca | g_StaticCriticalSectionCounter
    XOR ESI,ESI                         ; 00609fd0
    TEST EDX,EDX                        ; 00609fd2
    JLE 0x00609ff1                      ; 00609fd4
        ;   XREF to: 00609ff1 (CONDITIONAL_JUMP)  ; LAB_00609ff1
    MOV EBX,0x3f9b9d0                   ; 00609fd6 | g_StaticCriticalSectionArray
    PUSH EBX                            ; 00609fdb | g_StaticCriticalSectionArray | g_StaticCriticalSectionArray[1].DebugInfo
        ;   Label: LAB_00609fdb
    INC ESI                             ; 00609fdc
    CALL dword ptr CS:[0x611520]        ; 00609fdd | PTR_DeleteCriticalSection_00611520
    MOV ECX,dword ptr [0x03f9c000]      ; 00609fe4 | g_StaticCriticalSectionCounter
    ADD EBX,0x18                        ; 00609fea
    CMP ESI,ECX                         ; 00609fed
    JL 0x00609fdb                       ; 00609fef
        ;   XREF to: 00609fdb (CONDITIONAL_JUMP)  ; LAB_00609fdb
    POP ESI                             ; 00609ff1
        ;   Label: LAB_00609ff1
    POP EBX                             ; 00609ff2
    RET                                 ; 00609ff3

