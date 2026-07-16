; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70(void)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_10014190
;
; *****************************************************************************

section .text

    SUB ESP,0x64                        ; 10004a70
        ;   Label: dll_dx7.cpp_APIDLLclearZBuffer_FUN_10004a70
    XOR EAX,EAX                         ; 10004a73
    MOV ECX,0x19                        ; 10004a75
    PUSH EDI                            ; 10004a7a
    LEA EDI,[ESP + 0x4]                 ; 10004a7b
    STOSD.REP ES:EDI                    ; 10004a7f
    MOV dword ptr [ESP + 0x4],0x64      ; 10004a81
    MOV dword ptr [ESP + 0x54],0xffffffff ; 10004a89
    LEA EAX,[ESP + 0x4]                 ; 10004a91
    MOV ECX,dword ptr [0x10014190]      ; 10004a95 | DAT_10014190
    PUSH EAX                            ; 10004a9b
    PUSH 0x3000000                      ; 10004a9c
    PUSH 0x0                            ; 10004aa1
    MOV EAX,dword ptr [ECX]             ; 10004aa3
    PUSH 0x0                            ; 10004aa5
    PUSH 0x0                            ; 10004aa7
    PUSH ECX                            ; 10004aa9
    CALL dword ptr [EAX + 0x14]         ; 10004aaa
    MOV EAX,0x1                         ; 10004aad
    POP EDI                             ; 10004ab2
    ADD ESP,0x64                        ; 10004ab3
    RET                                 ; 10004ab6

