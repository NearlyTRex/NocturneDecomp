; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005708c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)
;
; Local Variables:
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_io.c_getFileStat_FUN_0056c864 at 0056ca18
;
; Referenced Globals:
;   void* PTR_FileTimeToDosDateTime_005754bc = 00175ba6
;   void* PTR_FileTimeToLocalFileTime_005754c0 = 00175bbe
;
; Called Functions:
;   FileTimeToDosDateTime
;   FileTimeToLocalFileTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005708c0
        ;   Label: crt_unknown.c_FUN_005708c0
    SUB ESP,0x8                         ; 005708c1
    MOV EAX,ESP                         ; 005708c4
    PUSH EAX                            ; 005708c6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005708c7
    PUSH EDX                            ; 005708cb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005708cc
    CALL dword ptr CS:[0x5754c0]        ; 005708d0 | PTR_FileTimeToLocalFileTime_005754c0
    PUSH EBX                            ; 005708d7
    MOV ECX,dword ptr [ESP + 0x18]      ; 005708d8
    PUSH ECX                            ; 005708dc
    LEA EAX,[ESP + 0x8]                 ; 005708dd
    PUSH EAX                            ; 005708e1
    CALL dword ptr CS:[0x5754bc]        ; 005708e2 | PTR_FileTimeToDosDateTime_005754bc
    ADD ESP,0x8                         ; 005708e9
    POP EBX                             ; 005708ec
    RET                                 ; 005708ed

