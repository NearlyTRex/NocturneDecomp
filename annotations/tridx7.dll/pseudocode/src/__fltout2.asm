; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)
;
; Parameters:
; _CRT_DOUBLE      Stack[0x4]:8   _Dbl
; STRFLT           Stack[0xc]:4   _Flt
; char *           Stack[0x10]:4   _ResultStr
; size_t           Stack[0x14]:4   _SizeInBytes
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined2       Stack[-0x1c]:2  local_1c
; undefined1       Stack[-0x1a]:1  local_1a
; undefined        Stack[-0x18]:1  local_18
;
; XREF[3]:
;   __cftoe at 1000704a
;   __cftof at 100071ba
;   __cftog at 100072ec
;
; Called Functions:
;   $I10_OUTPUT
;   ___dtold
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x4]                 ; 1000a350
        ;   Label: __fltout2
    SUB ESP,0x28                        ; 1000a354
    LEA ECX,[ESP]                       ; 1000a357
    PUSH EBX                            ; 1000a35b
    PUSH ESI                            ; 1000a35c
    PUSH EDI                            ; 1000a35d
    PUSH EAX                            ; 1000a35e
    PUSH ECX                            ; 1000a35f
    CALL ___dtold                       ; 1000a360
        ;   XREF to: 1000a3e0 (UNCONDITIONAL_CALL)  ; undefined ___dtold()
    LEA ECX,[ESP + 0x20]                ; 1000a365
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000a369
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000a36d
    ADD ESP,0x8                         ; 1000a371
    PUSH ECX                            ; 1000a374
    PUSH 0x0                            ; 1000a375
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a377
    PUSH 0x11                           ; 1000a37b
    PUSH EDX                            ; 1000a37d
    PUSH EAX                            ; 1000a37e
    PUSH ECX                            ; 1000a37f
    CALL $I10_OUTPUT                    ; 1000a380
        ;   XREF to: 1000cf50 (UNCONDITIONAL_CALL)  ; undefined $I10_OUTPUT() | _$I10_OUTPUT
    MOV EDX,dword ptr [ESP + 0x58]      ; 1000a385
    ADD ESP,0x18                        ; 1000a389
    LEA EDI,[ESP + 0x1c]                ; 1000a38c
    MOV dword ptr [EDX + 0x8],EAX       ; 1000a390
    MOVSX ECX,byte ptr [ESP + 0x1a]     ; 1000a393
    MOVSX EAX,word ptr [ESP + 0x18]     ; 1000a398
    MOV dword ptr [EDX],ECX             ; 1000a39d
    MOV dword ptr [EDX + 0x4],EAX       ; 1000a39f
    MOV ECX,0xffffffff                  ; 1000a3a2
    SUB EAX,EAX                         ; 1000a3a7
    SCASB.REPNE ES:EDI                  ; 1000a3a9
    NOT ECX                             ; 1000a3ab
    SUB EDI,ECX                         ; 1000a3ad
    MOV EBX,ECX                         ; 1000a3af
    SHR ECX,0x2                         ; 1000a3b1
    MOV ESI,EDI                         ; 1000a3b4
    MOV EAX,dword ptr [ESP + 0x44]      ; 1000a3b6
    MOV EDI,EAX                         ; 1000a3ba
    MOVSD.REP ES:EDI,ESI                ; 1000a3bc
    MOV ECX,EBX                         ; 1000a3be
    AND ECX,0x3                         ; 1000a3c0
    MOVSB.REP ES:EDI,ESI                ; 1000a3c3
    POP EDI                             ; 1000a3c5
    MOV dword ptr [EDX + 0xc],EAX       ; 1000a3c6
    MOV EAX,EDX                         ; 1000a3c9
    POP ESI                             ; 1000a3cb
    POP EBX                             ; 1000a3cc
    ADD ESP,0x28                        ; 1000a3cd
    RET                                 ; 1000a3d0

