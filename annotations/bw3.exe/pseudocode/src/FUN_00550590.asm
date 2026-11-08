; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00550590(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004b6f30 at 004b7067
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00550590
        ;   Label: FUN_00550590
    MOV dword ptr [EDX + 0x8],0x0       ; 00550594
    LEA EAX,[EDX + 0xc]                 ; 0055059b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0055059e
    MOV dword ptr [EDX + 0x4],ECX       ; 005505a1
    MOV ECX,dword ptr [EDX + 0x4]       ; 005505a4
    MOV dword ptr [EDX],ECX             ; 005505a7
    MOV dword ptr [EAX + 0x8],0x0       ; 005505a9
    MOV ECX,dword ptr [EAX + 0x8]       ; 005505b0
    MOV dword ptr [EAX + 0x4],ECX       ; 005505b3
    MOV ECX,dword ptr [EAX + 0x4]       ; 005505b6
    MOV dword ptr [EAX],ECX             ; 005505b9
    MOV dword ptr [EDX + 0x18],0x41e00000 ; 005505bb
    LEA EAX,[EAX]                       ; 005505c2
    LEA EDX,[EDX]                       ; 005505c8
    MOV EAX,EAX                         ; 005505ce
    RET                                 ; 005505d0

