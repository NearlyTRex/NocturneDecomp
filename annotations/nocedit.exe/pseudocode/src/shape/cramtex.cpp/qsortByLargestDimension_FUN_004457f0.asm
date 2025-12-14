; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0(SCramWorkingEntry * entry_a, SCramWorkingEntry * entry_b)
;
; Parameters:
; SCramWorkingEntry * Stack[0x4]:4   entry_a
; SCramWorkingEntry * Stack[0x8]:4   entry_b
;
; XREF[2]:
;   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 at 00444e64
;   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 at 00445847
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004457f0
        ;   Label: shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0
    MOV EDX,dword ptr [EAX]             ; 004457f4
    MOV EAX,dword ptr [EAX + 0x4]       ; 004457f6
    CMP EDX,EAX                         ; 004457f9
    JLE 0x004457ff                      ; 004457fb
        ;   XREF to: 004457ff (CONDITIONAL_JUMP)  ; LAB_004457ff
    MOV EAX,EDX                         ; 004457fd
    MOV EDX,dword ptr [ESP + 0x4]       ; 004457ff
        ;   Label: LAB_004457ff
    MOV ECX,EAX                         ; 00445803
    MOV EAX,dword ptr [ESP + 0x4]       ; 00445805
    MOV EDX,dword ptr [EDX + 0x4]       ; 00445809
    MOV EAX,dword ptr [EAX]             ; 0044580c
    CMP EAX,EDX                         ; 0044580e
    JLE 0x00445817                      ; 00445810
        ;   XREF to: 00445817 (CONDITIONAL_JUMP)  ; LAB_00445817
    SUB ECX,EAX                         ; 00445812
    MOV EAX,ECX                         ; 00445814
    RET                                 ; 00445816
    MOV EAX,EDX                         ; 00445817
        ;   Label: LAB_00445817
    SUB ECX,EAX                         ; 00445819
    MOV EAX,ECX                         ; 0044581b
    RET                                 ; 0044581d

