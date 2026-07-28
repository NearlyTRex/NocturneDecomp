; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_pod_cpp_crc32ComputeFromFile_FUN_004f78d0(_FILE *param_1,SIZE_T param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01e428d0
;   undefined4 DAT_01e428d1
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005636d0
;   engine_pod.cpp_crc32UpdateByte_FUN_004f77d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f78d0
        ;   Label: engine_pod.cpp_crc32ComputeFromFile_FUN_004f78d0
    PUSH ESI                            ; 004f78d1
    PUSH EDI                            ; 004f78d2
    PUSH EBP                            ; 004f78d3
    SUB ESP,0x4                         ; 004f78d4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f78d7
    MOV EBP,0xffffffff                  ; 004f78db
    CMP EDI,0x10000                     ; 004f78e0
    JL 0x004f7932                       ; 004f78e6
        ;   XREF to: 004f7932 (CONDITIONAL_JUMP)  ; LAB_004f7932
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f78e8
        ;   Label: LAB_004f78e8
    PUSH EDX                            ; 004f78ec
    PUSH 0x1                            ; 004f78ed
    PUSH 0x10000                        ; 004f78ef
    PUSH 0x1e428d0                      ; 004f78f4 | DAT_01e428d0
    MOV ESI,0x1e428d0                   ; 004f78f9
    XOR EBX,EBX                         ; 004f78fe
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7900
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f7905
    MOV EAX,EBP                         ; 004f7908
    XOR EDX,EDX                         ; 004f790a
        ;   Label: LAB_004f790a
    MOV DL,byte ptr [ESI]               ; 004f790c | DAT_01e428d0 | DAT_01e428d1
    PUSH EDX                            ; 004f790e
    PUSH EAX                            ; 004f790f
    INC ESI                             ; 004f7910
    INC EBX                             ; 004f7911
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f7912
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f7917
    CMP EBX,0x10000                     ; 004f791a
    JC 0x004f790a                       ; 004f7920
        ;   XREF to: 004f790a (CONDITIONAL_JUMP)  ; LAB_004f790a
    SUB EDI,0x10000                     ; 004f7922
    MOV EBP,EAX                         ; 004f7928
    CMP EDI,0x10000                     ; 004f792a
    JGE 0x004f78e8                      ; 004f7930
        ;   XREF to: 004f78e8 (CONDITIONAL_JUMP)  ; LAB_004f78e8
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f7932
        ;   Label: LAB_004f7932
    PUSH ECX                            ; 004f7936
    PUSH 0x1                            ; 004f7937
    PUSH EDI                            ; 004f7939
    PUSH 0x1e428d0                      ; 004f793a | DAT_01e428d0
    MOV EBX,0x1e428d0                   ; 004f793f
    XOR ESI,ESI                         ; 004f7944
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f7946
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f794b
    MOV EAX,EBP                         ; 004f794e
    MOV dword ptr [ESP],EDI             ; 004f7950
    TEST EDI,EDI                        ; 004f7953
    JBE 0x004f7970                      ; 004f7955
        ;   XREF to: 004f7970 (CONDITIONAL_JUMP)  ; LAB_004f7970
    MOV EDI,dword ptr [ESP]             ; 004f7957
    XOR EDX,EDX                         ; 004f795a
        ;   Label: LAB_004f795a
    MOV DL,byte ptr [EBX]               ; 004f795c | DAT_01e428d0 | DAT_01e428d1
    PUSH EDX                            ; 004f795e
    PUSH EAX                            ; 004f795f
    INC EBX                             ; 004f7960
    INC ESI                             ; 004f7961
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f7962
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f7967
    CMP ESI,EDI                         ; 004f796a
    JC 0x004f795a                       ; 004f796c
        ;   XREF to: 004f795a (CONDITIONAL_JUMP)  ; LAB_004f795a
    MOV EAX,EAX                         ; 004f796e
    ADD ESP,0x4                         ; 004f7970
        ;   Label: LAB_004f7970
    POP EBP                             ; 004f7973
    POP EDI                             ; 004f7974
    POP ESI                             ; 004f7975
    POP EBX                             ; 004f7976
    RET                                 ; 004f7977

