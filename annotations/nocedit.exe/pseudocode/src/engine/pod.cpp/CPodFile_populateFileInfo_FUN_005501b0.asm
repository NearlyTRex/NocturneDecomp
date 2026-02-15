; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   file_index
; SFoundFileInfo * Stack[0xc]:4   output_info
;
; XREF[2]:
;   engine_pod.cpp_CPod_findFile_FUN_00551380 at 005513be
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 at 00550fd6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005501b0
        ;   Label: engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
    PUSH ESI                            ; 005501b1
    PUSH EDI                            ; 005501b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005501b3
    MOV EDX,dword ptr [ESP + 0x18]      ; 005501b7
    MOV ECX,dword ptr [ESP + 0x14]      ; 005501bb
    LEA EAX,[ECX*0x4 + 0x0]             ; 005501bf
    ADD EAX,ECX                         ; 005501c6
    LEA ESI,[EBX + 0x4]                 ; 005501c8
    SHL EAX,0x2                         ; 005501cb
    MOV ECX,dword ptr [EBX + 0x414]     ; 005501ce
    LEA EDI,[EDX + 0x100]               ; 005501d4
    ADD ECX,EAX                         ; 005501da
    PUSH EDI                            ; 005501dc
    MOV AL,byte ptr [ESI]               ; 005501dd
        ;   Label: LAB_005501dd
    MOV byte ptr [EDI],AL               ; 005501df
    CMP AL,0x0                          ; 005501e1
    JZ 0x005501f5                       ; 005501e3
        ;   XREF to: 005501f5 (CONDITIONAL_JUMP)  ; LAB_005501f5
    MOV AL,byte ptr [ESI + 0x1]         ; 005501e5
    ADD ESI,0x2                         ; 005501e8
    MOV byte ptr [EDI + 0x1],AL         ; 005501eb
    ADD EDI,0x2                         ; 005501ee
    CMP AL,0x0                          ; 005501f1
    JNZ 0x005501dd                      ; 005501f3
        ;   XREF to: 005501dd (CONDITIONAL_JUMP)  ; LAB_005501dd
    POP EDI                             ; 005501f5
        ;   Label: LAB_005501f5
    MOV EAX,dword ptr [ECX + 0x8]       ; 005501f6
    MOV dword ptr [EDX + 0x200],EAX     ; 005501f9
    MOV EAX,dword ptr [ECX + 0x4]       ; 005501ff
    MOV dword ptr [EDX + 0x204],EAX     ; 00550202
    MOV EAX,dword ptr [ECX + 0xc]       ; 00550208
    MOV dword ptr [EDX + 0x20c],EAX     ; 0055020b
    MOV EAX,dword ptr [EBX + 0x104]     ; 00550211
    MOV dword ptr [EDX + 0x208],0x1     ; 00550217
    MOV dword ptr [EDX + 0x210],EAX     ; 00550221
    POP EDI                             ; 00550227
    POP ESI                             ; 00550228
    POP EBX                             ; 00550229
    RET                                 ; 0055022a

