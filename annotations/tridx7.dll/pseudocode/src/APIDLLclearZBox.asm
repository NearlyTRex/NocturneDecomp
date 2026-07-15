; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLclearZBox(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_10014190
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10004ac0
        ;   Label: APIDLLclearZBox
    MOV ECX,dword ptr [ESP + 0x4]       ; 10004ac4
    SUB ESP,0x74                        ; 10004ac8
    MOV dword ptr [ESP + 0x4],EAX       ; 10004acb
    PUSH EDI                            ; 10004acf
    MOV EAX,dword ptr [ESP + 0x88]      ; 10004ad0
    MOV dword ptr [ESP + 0x4],ECX       ; 10004ad7
    INC EAX                             ; 10004adb
    LEA EDI,[ESP + 0x14]                ; 10004adc
    MOV ECX,0x19                        ; 10004ae0
    MOV dword ptr [ESP + 0x10],EAX      ; 10004ae5
    MOV EAX,dword ptr [ESP + 0x80]      ; 10004ae9
    INC EAX                             ; 10004af0
    MOV dword ptr [ESP + 0xc],EAX       ; 10004af1
    XOR EAX,EAX                         ; 10004af5
    STOSD.REP ES:EDI                    ; 10004af7
    MOV dword ptr [ESP + 0x14],0x64     ; 10004af9
    LEA ECX,[ESP + 0x14]                ; 10004b01
    LEA EDX,[ESP + 0x4]                 ; 10004b05
    MOV dword ptr [ESP + 0x64],0xffffffff ; 10004b09
    PUSH ECX                            ; 10004b11
    PUSH 0x3000000                      ; 10004b12
    PUSH EAX                            ; 10004b17
    PUSH EAX                            ; 10004b18
    PUSH EDX                            ; 10004b19
    MOV EAX,[0x10014190]                ; 10004b1a | DAT_10014190
    PUSH EAX                            ; 10004b1f
    MOV EAX,dword ptr [EAX]             ; 10004b20
    CALL dword ptr [EAX + 0x14]         ; 10004b22
    MOV EAX,0x1                         ; 10004b25
    POP EDI                             ; 10004b2a
    ADD ESP,0x74                        ; 10004b2b
    RET                                 ; 10004b2e

