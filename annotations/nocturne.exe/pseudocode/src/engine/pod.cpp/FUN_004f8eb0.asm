; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_004f8eb0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_0058d9a8
;   TerminatedCString s_rb_0058d9a9
;   TerminatedCString s_Computing_CRC_over_entir_0058dc61
;   TerminatedCString s_engine_pod_cpp_0058dc86
;   TerminatedCString s_Can_t_mount_s_to_check_v_0058dc98
;   TerminatedCString s_engine_pod_cpp_0058dcb8
;   TerminatedCString s_Invalid_pod_version_for_0058dcca
;   TerminatedCString s_rb_0058dce9
;   undefined4 DAT_005b6d50
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e428d0
;   undefined4 DAT_01e428d1
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdio.c_fwrite_FUN_00563a50
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
;   engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0
;   engine_pod.cpp_crc32UpdateByte_FUN_004f77d0
;   engine_pod.cpp_FUN_004f7a80
;   engine_pod.cpp_FUN_004f7ae0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8eb0
        ;   Label: engine_pod.cpp_FUN_004f8eb0
    PUSH ESI                            ; 004f8eb1
    PUSH EDI                            ; 004f8eb2
    PUSH EBP                            ; 004f8eb3
    SUB ESP,0x230                       ; 004f8eb4
    MOV EDX,dword ptr [ESP + 0x248]     ; 004f8eba
    PUSH EDX                            ; 004f8ec1
    PUSH 0x58dc61                       ; 004f8ec2 | = "Computing CRC over entire pod: %s..."
    MOV ECX,dword ptr [0x005b6d50]      ; 004f8ec7 | DAT_005b6d50
    PUSH ECX                            ; 004f8ecd
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004f8ece
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    ADD ESP,0xc                         ; 004f8ed3
    MOV EAX,ESP                         ; 004f8ed6
    PUSH EAX                            ; 004f8ed8
    CALL engine_pod.cpp_FUN_004f7a80    ; 004f8ed9
        ;   XREF to: 004f7a80 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_004f7a80()
    ADD ESP,0x4                         ; 004f8ede
    MOV EBX,dword ptr [ESP + 0x248]     ; 004f8ee1
    PUSH EBX                            ; 004f8ee8
    LEA EAX,[ESP + 0x4]                 ; 004f8ee9
    PUSH EAX                            ; 004f8eed
    CALL engine_pod.cpp_FUN_004f7ae0    ; 004f8eee
        ;   XREF to: 004f7ae0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_004f7ae0()
    ADD ESP,0x8                         ; 004f8ef3
    TEST EAX,EAX                        ; 004f8ef6
    JNZ 0x004f8f1e                      ; 004f8ef8
        ;   XREF to: 004f8f1e (CONDITIONAL_JUMP)  ; LAB_004f8f1e
    PUSH EBX                            ; 004f8efa
    MOV ESI,0x58dc86                    ; 004f8efb | = "..\\engine\\pod.cpp"
    MOV EDI,0x37a                       ; 004f8f00
    PUSH 0x58dc98                       ; 004f8f05 | = "Can't mount %s to check version"
    MOV dword ptr [0x01cc4800],ESI      ; 004f8f0a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004f8f10 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f8f16
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004f8f1b
    MOV EAX,ESP                         ; 004f8f1e
        ;   Label: LAB_004f8f1e
    PUSH EAX                            ; 004f8f20
    MOV EBX,dword ptr [ESP + 0x4]       ; 004f8f21
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0 ; 004f8f25
        ;   XREF to: 004f80e0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f8f2a
    CMP EBX,0x1                         ; 004f8f2d
    JNZ 0x004f90ac                      ; 004f8f30
        ;   XREF to: 004f90ac (CONDITIONAL_JUMP)  ; LAB_004f90ac
    MOV dword ptr [ESP + 0x224],0x54    ; 004f8f36
    MOV EDI,dword ptr [ESP + 0x248]     ; 004f8f41
        ;   Label: LAB_004f8f41
    PUSH EDI                            ; 004f8f48
    PUSH 0x58d9a8                       ; 004f8f49 | DAT_0058d9a8
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004f8f4e
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004f8f53
    PUSH 0x58d9a9                       ; 004f8f56 | = "rb"
    PUSH EDI                            ; 004f8f5b
    MOV ESI,EAX                         ; 004f8f5c
    MOV EBP,dword ptr [ESP + 0x22c]     ; 004f8f5e
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f8f65
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f8f6a
    PUSH 0x0                            ; 004f8f6d
    PUSH EBP                            ; 004f8f6f
    SUB ESI,EBP                         ; 004f8f70
    MOV EBX,EAX                         ; 004f8f72
    PUSH EAX                            ; 004f8f74
    MOV EDI,ESI                         ; 004f8f75
    MOV dword ptr [ESP + 0x22c],EAX     ; 004f8f77
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f8f7e
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f8f83
    MOV EBP,0xffffffff                  ; 004f8f86
    MOV dword ptr [ESP + 0x22c],EBX     ; 004f8f8b
    CMP ESI,0x10000                     ; 004f8f92
    JL 0x004f8fe7                       ; 004f8f98
        ;   XREF to: 004f8fe7 (CONDITIONAL_JUMP)  ; LAB_004f8fe7
    MOV ECX,dword ptr [ESP + 0x22c]     ; 004f8f9a
        ;   Label: LAB_004f8f9a
    PUSH ECX                            ; 004f8fa1
    PUSH 0x1                            ; 004f8fa2
    PUSH 0x10000                        ; 004f8fa4
    PUSH 0x1e428d0                      ; 004f8fa9 | DAT_01e428d0
    MOV ESI,0x1e428d0                   ; 004f8fae
    XOR EBX,EBX                         ; 004f8fb3
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f8fb5
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f8fba
    MOV EAX,EBP                         ; 004f8fbd
    XOR EDX,EDX                         ; 004f8fbf
        ;   Label: LAB_004f8fbf
    MOV DL,byte ptr [ESI]               ; 004f8fc1 | DAT_01e428d0 | DAT_01e428d1
    PUSH EDX                            ; 004f8fc3
    PUSH EAX                            ; 004f8fc4
    INC ESI                             ; 004f8fc5
    INC EBX                             ; 004f8fc6
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f8fc7
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f8fcc
    CMP EBX,0x10000                     ; 004f8fcf
    JC 0x004f8fbf                       ; 004f8fd5
        ;   XREF to: 004f8fbf (CONDITIONAL_JUMP)  ; LAB_004f8fbf
    SUB EDI,0x10000                     ; 004f8fd7
    MOV EBP,EAX                         ; 004f8fdd
    CMP EDI,0x10000                     ; 004f8fdf
    JGE 0x004f8f9a                      ; 004f8fe5
        ;   XREF to: 004f8f9a (CONDITIONAL_JUMP)  ; LAB_004f8f9a
    MOV EBX,dword ptr [ESP + 0x22c]     ; 004f8fe7
        ;   Label: LAB_004f8fe7
    PUSH EBX                            ; 004f8fee
    PUSH 0x1                            ; 004f8fef
    PUSH EDI                            ; 004f8ff1
    PUSH 0x1e428d0                      ; 004f8ff2 | DAT_01e428d0
    XOR ESI,ESI                         ; 004f8ff7
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f8ff9
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f8ffe
    MOV EBX,0x1e428d0                   ; 004f9001
    MOV dword ptr [ESP + 0x228],EDI     ; 004f9006
    TEST EDI,EDI                        ; 004f900d
    JBE 0x004f9030                      ; 004f900f
        ;   XREF to: 004f9030 (CONDITIONAL_JUMP)  ; LAB_004f9030
    MOV EDI,dword ptr [ESP + 0x228]     ; 004f9011
    XOR EAX,EAX                         ; 004f9018
        ;   Label: LAB_004f9018
    MOV AL,byte ptr [EBX]               ; 004f901a | DAT_01e428d0 | DAT_01e428d1
    PUSH EAX                            ; 004f901c
    PUSH EBP                            ; 004f901d
    INC EBX                             ; 004f901e
    INC ESI                             ; 004f901f
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f9020
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f9025
    MOV EBP,EAX                         ; 004f9028
    CMP ESI,EDI                         ; 004f902a
    JC 0x004f9018                       ; 004f902c
        ;   XREF to: 004f9018 (CONDITIONAL_JUMP)  ; LAB_004f9018
    MOV EAX,EAX                         ; 004f902e
    MOV EAX,dword ptr [ESP + 0x220]     ; 004f9030
        ;   Label: LAB_004f9030
    PUSH EAX                            ; 004f9037
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f9038
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f903d
    PUSH 0x58dce9                       ; 004f9040 | = "rb+"
    MOV EDX,dword ptr [ESP + 0x24c]     ; 004f9045
    PUSH EDX                            ; 004f904c
    MOV dword ptr [ESP + 0x224],EBP     ; 004f904d
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f9054
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f9059
    MOV EBX,EAX                         ; 004f905c
    MOV EAX,dword ptr [ESP + 0x224]     ; 004f905e
    PUSH 0x0                            ; 004f9065
    SUB EAX,0x4                         ; 004f9067
    PUSH EAX                            ; 004f906a
    PUSH EBX                            ; 004f906b
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f906c
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f9071
    PUSH EBX                            ; 004f9074
    PUSH 0x1                            ; 004f9075
    PUSH 0x4                            ; 004f9077
    LEA EAX,[ESP + 0x228]               ; 004f9079
    PUSH EAX                            ; 004f9080
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 004f9081
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f9086
    PUSH EBX                            ; 004f9089
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f908a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f908f
    PUSH 0x0                            ; 004f9092
    LEA EAX,[ESP + 0x4]                 ; 004f9094
    PUSH EAX                            ; 004f9098
    CALL engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0 ; 004f9099
        ;   XREF to: 004f7ac0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f909e
    ADD ESP,0x230                       ; 004f90a1
    POP EBP                             ; 004f90a7
    POP EDI                             ; 004f90a8
    POP ESI                             ; 004f90a9
    POP EBX                             ; 004f90aa
    RET                                 ; 004f90ab
    CMP EBX,0x2                         ; 004f90ac
        ;   Label: LAB_004f90ac
    JNZ 0x004f90c1                      ; 004f90af
        ;   XREF to: 004f90c1 (CONDITIONAL_JUMP)  ; LAB_004f90c1
    MOV dword ptr [ESP + 0x224],0x8     ; 004f90b1
    JMP 0x004f8f41                      ; 004f90bc
        ;   XREF to: 004f8f41 (UNCONDITIONAL_JUMP)  ; LAB_004f8f41
    PUSH EBX                            ; 004f90c1
        ;   Label: LAB_004f90c1
    MOV ECX,dword ptr [ESP + 0x24c]     ; 004f90c2
    PUSH ECX                            ; 004f90c9
    MOV EAX,0x58dcb8                    ; 004f90ca | = "..\\engine\\pod.cpp"
    MOV EDX,0x385                       ; 004f90cf
    PUSH 0x58dcca                       ; 004f90d4 | = "Invalid pod version for %s: %d"
    MOV [0x01cc4800],EAX                ; 004f90d9 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004f90de | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f90e4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004f90e9
    JMP 0x004f8f41                      ; 004f90ec
        ;   XREF to: 004f8f41 (UNCONDITIONAL_JUMP)  ; LAB_004f8f41

