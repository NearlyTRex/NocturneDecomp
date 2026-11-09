; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_004477f0(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_FUN_00447660 at 004476e4
;   core_game.cpp_staticInit_FUN_004b28b0 at 004b290d
;
; Referenced Globals:
;   TerminatedCString s_unnamed_005ceb23
;   undefined4 s_nnamed_005ceb23+1
;   undefined4 s_named_005ceb23+2
;   undefined4 s_amed_005ceb23+3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004477f0
        ;   Label: core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0
    PUSH EDI                            ; 004477f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004477f2
    MOV dword ptr [EDX + 0x48],0x0      ; 004477f6
    MOV ESI,0x5ceb23                    ; 004477fd | = "unnamed"
    MOV dword ptr [EDX],0x40            ; 00447802
    LEA EDI,[EDX + 0x8]                 ; 00447808
    MOV dword ptr [EDX + 0x4],0x40      ; 0044780b
    PUSH EDI                            ; 00447812
    MOV AL,byte ptr [ESI]               ; 00447813 | = "unnamed" | s_named_005ceb23+2
        ;   Label: LAB_00447813
    MOV byte ptr [EDI],AL               ; 00447815
    CMP AL,0x0                          ; 00447817
    JZ 0x0044782b                       ; 00447819
        ;   XREF to: 0044782b (CONDITIONAL_JUMP)  ; LAB_0044782b
    MOV AL,byte ptr [ESI + 0x1]         ; 0044781b | s_nnamed_005ceb23+1 | s_amed_005ceb23+3
    ADD ESI,0x2                         ; 0044781e
    MOV byte ptr [EDI + 0x1],AL         ; 00447821
    ADD EDI,0x2                         ; 00447824
    CMP AL,0x0                          ; 00447827
    JNZ 0x00447813                      ; 00447829
        ;   XREF to: 00447813 (CONDITIONAL_JUMP)  ; LAB_00447813
    POP EDI                             ; 0044782b
        ;   Label: LAB_0044782b
    MOV EAX,EDX                         ; 0044782c
    POP EDI                             ; 0044782e
    POP ESI                             ; 0044782f
    RET                                 ; 00447830

