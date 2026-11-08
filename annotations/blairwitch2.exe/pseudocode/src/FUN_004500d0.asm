; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004500d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0041bd30
;   FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004500d0
        ;   Label: FUN_004500d0
    PUSH ESI                            ; 004500d1
    PUSH EDI                            ; 004500d2
    PUSH EBP                            ; 004500d3
    SUB ESP,0x24                        ; 004500d4
    MOV EBX,dword ptr [ESP + 0x38]      ; 004500d7
    PUSH EBX                            ; 004500db
    CALL FUN_004ce240                   ; 004500dc
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce240()
    ADD ESP,0x4                         ; 004500e1
    ADD EAX,0x259b4                     ; 004500e4
    PUSH EAX                            ; 004500e9
    CALL FUN_0041bd30                   ; 004500ea
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bd30()
    LEA EBX,[EAX + 0xfffda64c]          ; 004500ef
    MOV dword ptr [EBX + 0x2b0],0x5f5174 ; 004500f5
    MOV dword ptr [EBX + 0x257ac],0x0   ; 004500ff
    MOV dword ptr [EBX + 0x25640],0x0   ; 00450109
    MOV dword ptr [EBX + 0x25644],0x0   ; 00450113
    MOV dword ptr [EBX + 0x25648],0x0   ; 0045011d
    MOV dword ptr [EBX + 0x2564c],0xbf060a92 ; 00450127
    MOV dword ptr [EBX + 0x2566c],0x0   ; 00450131
    MOV dword ptr [EBX + 0x25664],0x0   ; 0045013b
    MOV dword ptr [EBX + 0x2565c],0x0   ; 00450145
    MOV dword ptr [EBX + 0x25654],0x0   ; 0045014f
    MOV dword ptr [EBX + 0x25668],0x0   ; 00450159
    MOV dword ptr [EBX + 0x25670],0x0   ; 00450163
    MOV dword ptr [EBX + 0x2568c],0x0   ; 0045016d
    MOV dword ptr [EBX + 0x25684],0x0   ; 00450177
    MOV dword ptr [EBX + 0x2567c],0x0   ; 00450181
    MOV dword ptr [EBX + 0x25674],0x0   ; 0045018b
    MOV dword ptr [EBX + 0x25688],0x0   ; 00450195

