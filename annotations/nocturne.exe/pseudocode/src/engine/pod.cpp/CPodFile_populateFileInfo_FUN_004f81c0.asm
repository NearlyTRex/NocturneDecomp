; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_004f81c0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   file_index
; SFoundFileInfo * Stack[0xc]:4   output_info
;
; XREF[2]:
;   engine_pod.cpp_CPod_findFile_FUN_004f9200 at 004f923e
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0 at 004f8e86
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f81c0
        ;   Label: engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0
    PUSH ESI                            ; 004f81c1
    PUSH EDI                            ; 004f81c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f81c3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f81c7
    MOV ECX,dword ptr [ESP + 0x14]      ; 004f81cb
    LEA EAX,[ECX*0x4 + 0x0]             ; 004f81cf
    ADD EAX,ECX                         ; 004f81d6
    LEA ESI,[EBX + 0x4]                 ; 004f81d8
    SHL EAX,0x2                         ; 004f81db
    MOV ECX,dword ptr [EBX + 0x20c]     ; 004f81de
    LEA EDI,[EDX + 0x100]               ; 004f81e4
    ADD ECX,EAX                         ; 004f81ea
    PUSH EDI                            ; 004f81ec
    MOV AL,byte ptr [ESI]               ; 004f81ed
        ;   Label: LAB_004f81ed
    MOV byte ptr [EDI],AL               ; 004f81ef
    CMP AL,0x0                          ; 004f81f1
    JZ 0x004f8205                       ; 004f81f3
        ;   XREF to: 004f8205 (CONDITIONAL_JUMP)  ; LAB_004f8205
    MOV AL,byte ptr [ESI + 0x1]         ; 004f81f5
    ADD ESI,0x2                         ; 004f81f8
    MOV byte ptr [EDI + 0x1],AL         ; 004f81fb
    ADD EDI,0x2                         ; 004f81fe
    CMP AL,0x0                          ; 004f8201
    JNZ 0x004f81ed                      ; 004f8203
        ;   XREF to: 004f81ed (CONDITIONAL_JUMP)  ; LAB_004f81ed
    POP EDI                             ; 004f8205
        ;   Label: LAB_004f8205
    MOV EAX,dword ptr [ECX + 0x8]       ; 004f8206
    MOV dword ptr [EDX + 0x200],EAX     ; 004f8209
    MOV EAX,dword ptr [ECX + 0x4]       ; 004f820f
    MOV dword ptr [EDX + 0x204],EAX     ; 004f8212
    MOV EAX,dword ptr [ECX + 0xc]       ; 004f8218
    MOV dword ptr [EDX + 0x20c],EAX     ; 004f821b
    MOV EAX,dword ptr [EBX + 0x104]     ; 004f8221
    MOV dword ptr [EDX + 0x208],0x1     ; 004f8227
    MOV dword ptr [EDX + 0x210],EAX     ; 004f8231
    POP EDI                             ; 004f8237
    POP ESI                             ; 004f8238
    POP EBX                             ; 004f8239
    RET                                 ; 004f823a

