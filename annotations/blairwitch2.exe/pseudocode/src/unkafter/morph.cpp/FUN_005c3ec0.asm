; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c3ec0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)
;
; Local Variables:
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005bfdd4 at 005bff88
;
; Referenced Globals:
;   void* PTR_FileTimeToDosDateTime_005c853c = 001c8d04
;   void* PTR_FileTimeToLocalFileTime_005c8540 = 001c8d1c
;
; Called Functions:
;   FileTimeToDosDateTime
;   FileTimeToLocalFileTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3ec0
        ;   Label: unkafter_morph.cpp_FUN_005c3ec0
    SUB ESP,0x8                         ; 005c3ec1
    MOV EAX,ESP                         ; 005c3ec4
    PUSH EAX                            ; 005c3ec6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c3ec7
    PUSH EDX                            ; 005c3ecb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c3ecc
    CALL dword ptr CS:[0x5c8540]        ; 005c3ed0 | PTR_FileTimeToLocalFileTime_005c8540
    PUSH EBX                            ; 005c3ed7
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c3ed8
    PUSH ECX                            ; 005c3edc
    LEA EAX,[ESP + 0x8]                 ; 005c3edd
    PUSH EAX                            ; 005c3ee1
    CALL dword ptr CS:[0x5c853c]        ; 005c3ee2 | PTR_FileTimeToDosDateTime_005c853c
    ADD ESP,0x8                         ; 005c3ee9
    POP EBX                             ; 005c3eec
    RET                                 ; 005c3eed

