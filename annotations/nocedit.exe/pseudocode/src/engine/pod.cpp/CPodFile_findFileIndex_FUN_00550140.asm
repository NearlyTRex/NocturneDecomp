; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[6]:
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004ba3af
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b784c
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6672
;   engine_pod.cpp_CPod_findFile_FUN_00551380 at 0055139b
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0 at 0055132f
;   engine_pod.cpp_findFilesByExtension_FUN_00550ce0 at 00550e2d
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550140
        ;   Label: engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
    PUSH ESI                            ; 00550141
    PUSH EDI                            ; 00550142
    PUSH EBP                            ; 00550143
    MOV EBP,dword ptr [ESP + 0x14]      ; 00550144
    MOV ESI,dword ptr [EBP + 0x410]     ; 00550148
    DEC ESI                             ; 0055014e
    XOR EDI,EDI                         ; 0055014f
    TEST ESI,ESI                        ; 00550151
    JL 0x0055018a                       ; 00550153 | LAB_0055018a
        ;   XREF to: 0055018a (CONDITIONAL_JUMP)
    LEA EDX,[EDI + ESI*0x1]             ; 00550155
        ;   Label: LAB_00550155
    MOV EAX,EDX                         ; 00550158
    SAR EDX,0x1f                        ; 0055015a
    SUB EAX,EDX                         ; 0055015d
    SAR EAX,0x1                         ; 0055015f
    MOV EBX,EAX                         ; 00550161
    IMUL EAX,EAX,0x14                   ; 00550163
    MOV EDX,dword ptr [EBP + 0x414]     ; 00550166
    MOV ECX,dword ptr [EDX + EAX*0x1]   ; 0055016c
    PUSH ECX                            ; 0055016f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00550170
    PUSH EAX                            ; 00550174
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00550175 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055017a
    TEST EAX,EAX                        ; 0055017d
    JZ 0x00550194                       ; 0055017f | LAB_00550194
        ;   XREF to: 00550194 (CONDITIONAL_JUMP)
    JL 0x0055019b                       ; 00550181 | LAB_0055019b
        ;   XREF to: 0055019b (CONDITIONAL_JUMP)
    LEA EDI,[EBX + 0x1]                 ; 00550183
    CMP EDI,ESI                         ; 00550186
    JLE 0x00550155                      ; 00550188 | LAB_00550155
        ;   XREF to: 00550155 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0055018a
        ;   Label: LAB_0055018a
    POP EBP                             ; 0055018f
    POP EDI                             ; 00550190
    POP ESI                             ; 00550191
    POP EBX                             ; 00550192
    RET                                 ; 00550193
    MOV EAX,EBX                         ; 00550194
        ;   Label: LAB_00550194
    POP EBP                             ; 00550196
    POP EDI                             ; 00550197
    POP ESI                             ; 00550198
    POP EBX                             ; 00550199
    RET                                 ; 0055019a
    LEA ESI,[EBX + -0x1]                ; 0055019b
        ;   Label: LAB_0055019b
    CMP EDI,ESI                         ; 0055019e
    JLE 0x00550155                      ; 005501a0 | LAB_00550155
        ;   XREF to: 00550155 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005501a2
    POP EBP                             ; 005501a7
    POP EDI                             ; 005501a8
    POP ESI                             ; 005501a9
    POP EBX                             ; 005501aa
    RET                                 ; 005501ab

