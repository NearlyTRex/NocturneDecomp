; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_findFile_FUN_004f9200(CPod *this_ptr,SFoundFileInfo *found_file_info)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; SFoundFileInfo * Stack[0x8]:4   found_file_info
;
; Called Functions:
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9200
        ;   Label: engine_pod.cpp_CPod_findFile_FUN_004f9200
    PUSH ESI                            ; 004f9201
    PUSH EDI                            ; 004f9202
    PUSH EBP                            ; 004f9203
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f9204
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f9208
    MOV EDX,dword ptr [EDI]             ; 004f920c
    XOR ESI,ESI                         ; 004f920e
    TEST EDX,EDX                        ; 004f9210
    JLE 0x004f9231                      ; 004f9212
        ;   XREF to: 004f9231 (CONDITIONAL_JUMP)  ; LAB_004f9231
    MOV EBX,EDI                         ; 004f9214
    PUSH EBP                            ; 004f9216
        ;   Label: LAB_004f9216
    MOV EAX,dword ptr [EBX + 0x4]       ; 004f9217
    PUSH EAX                            ; 004f921a
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150 ; 004f921b
        ;   XREF to: 004f8150 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f9220
    TEST EAX,EAX                        ; 004f9223
    JGE 0x004f9238                      ; 004f9225
        ;   XREF to: 004f9238 (CONDITIONAL_JUMP)  ; LAB_004f9238
    INC ESI                             ; 004f9227
    MOV ECX,dword ptr [EDI]             ; 004f9228
    ADD EBX,0x4                         ; 004f922a
    CMP ESI,ECX                         ; 004f922d
    JL 0x004f9216                       ; 004f922f
        ;   XREF to: 004f9216 (CONDITIONAL_JUMP)  ; LAB_004f9216
    XOR EAX,EAX                         ; 004f9231
        ;   Label: LAB_004f9231
    POP EBP                             ; 004f9233
    POP EDI                             ; 004f9234
    POP ESI                             ; 004f9235
    POP EBX                             ; 004f9236
    RET                                 ; 004f9237
    PUSH EBP                            ; 004f9238
        ;   Label: LAB_004f9238
    PUSH EAX                            ; 004f9239
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f923a
    PUSH EDX                            ; 004f923d
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0 ; 004f923e
        ;   XREF to: 004f81c0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 004f9243
    ADD ESP,0xc                         ; 004f9248
    POP EBP                             ; 004f924b
    POP EDI                             ; 004f924c
    POP ESI                             ; 004f924d
    POP EBX                             ; 004f924e
    RET                                 ; 004f924f

