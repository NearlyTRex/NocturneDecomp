; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10001900(GUID *param_1)
;
; Local Variables:
; undefined        Stack[-0x2fc]:1  local_2fc
;
; XREF[1]:
;   FUN_100017b0 at 100017b9
;
; Called Functions:
;   DirectDrawCreate
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10001900
        ;   Label: FUN_10001900
    SUB ESP,0x2fc                       ; 10001904
    LEA EAX,[ESP]                       ; 1000190a
    PUSH EDI                            ; 1000190e
    PUSH 0x0                            ; 1000190f
    PUSH EAX                            ; 10001911
    PUSH ECX                            ; 10001912
    CALL DirectDrawCreate               ; 10001913
        ;   XREF to: 10005424 (UNCONDITIONAL_CALL)  ; HRESULT DirectDrawCreate(GUID * lpGUID, IDirectDraw * * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 10001918
    JNZ 0x10001976                      ; 1000191a
        ;   XREF to: 10001976 (CONDITIONAL_JUMP)  ; LAB_10001976
    LEA EDI,[ESP + 0x8]                 ; 1000191c
    XOR EAX,EAX                         ; 10001920
    MOV ECX,0x5f                        ; 10001922
    MOV EDX,0x17c                       ; 10001927
    STOSD.REP ES:EDI                    ; 1000192c
    LEA EDI,[ESP + 0x184]               ; 1000192e
    MOV ECX,0x5f                        ; 10001935
    MOV dword ptr [ESP + 0x8],EDX       ; 1000193a
    STOSD.REP ES:EDI                    ; 1000193e
    LEA EAX,[ESP + 0x8]                 ; 10001940
    MOV ECX,dword ptr [ESP + 0x4]       ; 10001944
    MOV dword ptr [ESP + 0x184],EDX     ; 10001948
    LEA EDX,[ESP + 0x184]               ; 1000194f
    PUSH EDX                            ; 10001956
    PUSH EAX                            ; 10001957
    PUSH ECX                            ; 10001958
    MOV EAX,dword ptr [ECX]             ; 10001959
    CALL dword ptr [EAX + 0x2c]         ; 1000195b
    TEST EAX,EAX                        ; 1000195e
    JNZ 0x10001976                      ; 10001960
        ;   XREF to: 10001976 (CONDITIONAL_JUMP)  ; LAB_10001976
    TEST byte ptr [ESP + 0xc],0x1       ; 10001962
    JZ 0x10001976                       ; 10001967
        ;   XREF to: 10001976 (CONDITIONAL_JUMP)  ; LAB_10001976
    MOV EAX,0x1                         ; 10001969
    POP EDI                             ; 1000196e
    ADD ESP,0x2fc                       ; 1000196f
    RET                                 ; 10001975
    CMP dword ptr [ESP + 0x4],0x0       ; 10001976
        ;   Label: LAB_10001976
    JZ 0x10001987                       ; 1000197b
        ;   XREF to: 10001987 (CONDITIONAL_JUMP)  ; LAB_10001987
    MOV EAX,dword ptr [ESP + 0x4]       ; 1000197d
    PUSH EAX                            ; 10001981
    MOV EAX,dword ptr [EAX]             ; 10001982
    CALL dword ptr [EAX + 0x8]          ; 10001984
    XOR EAX,EAX                         ; 10001987
        ;   Label: LAB_10001987
    POP EDI                             ; 10001989
    ADD ESP,0x2fc                       ; 1000198a
    RET                                 ; 10001990

