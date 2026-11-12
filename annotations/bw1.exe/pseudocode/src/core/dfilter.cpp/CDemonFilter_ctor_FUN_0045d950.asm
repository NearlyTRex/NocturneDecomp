; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_0045d950(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0045d7c0 at 0045d844
;   core_game.cpp_staticInit_FUN_004cb7d0 at 004cb82d
;
; Referenced Globals:
;   TerminatedCString s_unnamed_005d841c
;   undefined4 s_nnamed_005d841c+1
;   undefined4 s_named_005d841c+2
;   undefined4 s_amed_005d841c+3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0045d950
        ;   Label: core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950
    PUSH EDI                            ; 0045d951
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045d952
    MOV dword ptr [EDX + 0x48],0x0      ; 0045d956
    MOV ESI,0x5d841c                    ; 0045d95d | = "unnamed"
    MOV dword ptr [EDX],0x40            ; 0045d962
    LEA EDI,[EDX + 0x8]                 ; 0045d968
    MOV dword ptr [EDX + 0x4],0x40      ; 0045d96b
    PUSH EDI                            ; 0045d972
    MOV AL,byte ptr [ESI]               ; 0045d973 | = "unnamed" | s_named_005d841c+2
        ;   Label: LAB_0045d973
    MOV byte ptr [EDI],AL               ; 0045d975
    CMP AL,0x0                          ; 0045d977
    JZ 0x0045d98b                       ; 0045d979
        ;   XREF to: 0045d98b (CONDITIONAL_JUMP)  ; LAB_0045d98b
    MOV AL,byte ptr [ESI + 0x1]         ; 0045d97b | s_nnamed_005d841c+1 | s_amed_005d841c+3
    ADD ESI,0x2                         ; 0045d97e
    MOV byte ptr [EDI + 0x1],AL         ; 0045d981
    ADD EDI,0x2                         ; 0045d984
    CMP AL,0x0                          ; 0045d987
    JNZ 0x0045d973                      ; 0045d989
        ;   XREF to: 0045d973 (CONDITIONAL_JUMP)  ; LAB_0045d973
    POP EDI                             ; 0045d98b
        ;   Label: LAB_0045d98b
    MOV EAX,EDX                         ; 0045d98c
    POP EDI                             ; 0045d98e
    POP ESI                             ; 0045d98f
    RET                                 ; 0045d990

