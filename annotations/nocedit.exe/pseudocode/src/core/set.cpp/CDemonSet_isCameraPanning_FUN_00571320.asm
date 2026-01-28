; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c81b
;   core_set.cpp_CDemonSet_FUN_0056fbd0 at 0056fd8a
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00646176
;   TerminatedCString s_CDemonSet_isCameraPannin_00646186
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571320
        ;   Label: core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571321
    CMP dword ptr [EBX + 0x15aea4],0x0  ; 00571325
    JL 0x00571341                       ; 0057132c
        ;   XREF to: 00571341 (CONDITIONAL_JUMP)  ; LAB_00571341
    IMUL EAX,dword ptr [EBX + 0x15aea4],0x1a4 ; 0057132e
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 00571338
    POP EBX                             ; 0057133f
    RET                                 ; 00571340
    PUSH ESI                            ; 00571341
        ;   Label: LAB_00571341
    MOV ECX,0x646176                    ; 00571342 | = "..\\core\\set.cpp"
    MOV ESI,0x138b                      ; 00571347
    PUSH 0x646186                       ; 0057134c | = "CDemonSet::isCameraPanning - no camer..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00571351 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00571357 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057135d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00571362
    POP ESI                             ; 00571365
    IMUL EAX,dword ptr [EBX + 0x15aea4],0x1a4 ; 00571366
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144] ; 00571370
    POP EBX                             ; 00571377
    RET                                 ; 00571378

