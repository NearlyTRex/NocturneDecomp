; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ground_cpp_CGround_ctor_FUN_004b1350(int *param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1350
        ;   Label: core_ground.cpp_CGround_ctor_FUN_004b1350
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b1351
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b1355
    MOV dword ptr [EAX + 0x10],0x1e     ; 004b1359
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1360
    MOV dword ptr [EAX + 0x14],0x1e     ; 004b1364
    MOV dword ptr [EAX],EDX             ; 004b136b
    MOV EBX,dword ptr [EAX + 0x14]      ; 004b136d
    MOV EDX,dword ptr [EAX + 0x10]      ; 004b1370
    IMUL EDX,EBX                        ; 004b1373
    MOV dword ptr [EAX + 0x24],0x0      ; 004b1376
    MOV dword ptr [EAX + 0x28],0x0      ; 004b137d
    MOV dword ptr [EAX + 0x1c],0x8      ; 004b1384
    MOV dword ptr [EAX + 0x20],0x1      ; 004b138b
    MOV dword ptr [EAX + 0x4],ECX       ; 004b1392
    DEC ECX                             ; 004b1395
    MOV dword ptr [EAX + 0x18],EDX      ; 004b1396
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1399
    MOV dword ptr [EAX + 0xc],ECX       ; 004b139d
    DEC EDX                             ; 004b13a0
    MOV dword ptr [EAX + 0x8],EDX       ; 004b13a1
    POP EBX                             ; 004b13a4
    RET                                 ; 004b13a5

