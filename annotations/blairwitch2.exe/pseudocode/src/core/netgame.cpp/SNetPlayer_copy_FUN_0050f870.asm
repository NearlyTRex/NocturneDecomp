; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNetPlayer * core_netgame_cpp_SNetPlayer_copy_FUN_0050f870(SNetPlayer *this_ptr,SNetPlayer *other)
;
; Parameters:
; SNetPlayer *     Stack[0x4]:4   this_ptr
; SNetPlayer *     Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f870
        ;   Label: core_netgame.cpp_SNetPlayer_copy_FUN_0050f870
    PUSH ESI                            ; 0050f871
    PUSH EDI                            ; 0050f872
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050f873
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050f877
    MOV EDI,EAX                         ; 0050f87b
    MOV ESI,EDX                         ; 0050f87d
    MOVSD ES:EDI,ESI                    ; 0050f87f
    MOVSD ES:EDI,ESI                    ; 0050f880
    MOVSD ES:EDI,ESI                    ; 0050f881
    MOVSD ES:EDI,ESI                    ; 0050f882
    MOVSD ES:EDI,ESI                    ; 0050f883
    MOV ECX,dword ptr [EDX + 0x14]      ; 0050f884
    MOV dword ptr [EAX + 0x14],ECX      ; 0050f887
    MOV ECX,dword ptr [EDX + 0x18]      ; 0050f88a
    MOV dword ptr [EAX + 0x18],ECX      ; 0050f88d
    LEA ECX,[EDX + 0x1c]                ; 0050f890
    MOV EBX,dword ptr [ECX]             ; 0050f893
    MOV dword ptr [EAX + 0x1c],EBX      ; 0050f895
    MOV CX,word ptr [ECX + 0x4]         ; 0050f898
    MOV word ptr [EAX + 0x20],CX        ; 0050f89c
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050f8a0
    MOV dword ptr [EAX + 0x24],ECX      ; 0050f8a3
    MOV ECX,dword ptr [EDX + 0x28]      ; 0050f8a6
    MOV dword ptr [EAX + 0x28],ECX      ; 0050f8a9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050f8ac
    MOV dword ptr [EAX + 0x2c],ECX      ; 0050f8af
    MOV ECX,dword ptr [EDX + 0x30]      ; 0050f8b2
    MOV dword ptr [EAX + 0x30],ECX      ; 0050f8b5
    MOV ECX,dword ptr [EDX + 0x34]      ; 0050f8b8
    MOV dword ptr [EAX + 0x34],ECX      ; 0050f8bb
    MOV ECX,dword ptr [EDX + 0x38]      ; 0050f8be
    MOV dword ptr [EAX + 0x38],ECX      ; 0050f8c1
    MOV ECX,dword ptr [EDX + 0x3c]      ; 0050f8c4
    MOV dword ptr [EAX + 0x3c],ECX      ; 0050f8c7
    MOV ECX,dword ptr [EDX + 0x40]      ; 0050f8ca
    MOV dword ptr [EAX + 0x40],ECX      ; 0050f8cd
    MOV ECX,dword ptr [EDX + 0x44]      ; 0050f8d0
    MOV dword ptr [EAX + 0x44],ECX      ; 0050f8d3
    MOV ECX,dword ptr [EDX + 0x48]      ; 0050f8d6
    MOV dword ptr [EAX + 0x48],ECX      ; 0050f8d9
    MOV ECX,dword ptr [EDX + 0x4c]      ; 0050f8dc
    MOV dword ptr [EAX + 0x4c],ECX      ; 0050f8df
    MOV ECX,dword ptr [EDX + 0x50]      ; 0050f8e2
    MOV dword ptr [EAX + 0x50],ECX      ; 0050f8e5
    MOV ECX,dword ptr [EDX + 0x54]      ; 0050f8e8
    MOV dword ptr [EAX + 0x54],ECX      ; 0050f8eb
    MOV ECX,dword ptr [EDX + 0x58]      ; 0050f8ee
    MOV dword ptr [EAX + 0x58],ECX      ; 0050f8f1
    MOV ECX,dword ptr [EDX + 0x5c]      ; 0050f8f4
    MOV dword ptr [EAX + 0x5c],ECX      ; 0050f8f7
    MOV ECX,dword ptr [EDX + 0x60]      ; 0050f8fa
    MOV dword ptr [EAX + 0x60],ECX      ; 0050f8fd
    ADD EAX,0x1c                        ; 0050f900
    MOV ECX,dword ptr [EDX + 0x64]      ; 0050f903
    MOV dword ptr [EAX + 0x48],ECX      ; 0050f906
    SUB EAX,0x1c                        ; 0050f909
    MOV ECX,dword ptr [EDX + 0x68]      ; 0050f90c
    MOV dword ptr [EAX + 0x68],ECX      ; 0050f90f
    ADD EAX,0x4c                        ; 0050f912
    MOV ECX,dword ptr [EDX + 0x6c]      ; 0050f915
    MOV dword ptr [EAX + 0x20],ECX      ; 0050f918
    SUB EAX,0x4c                        ; 0050f91b
    MOV ECX,dword ptr [EDX + 0x70]      ; 0050f91e
    MOV dword ptr [EAX + 0x70],ECX      ; 0050f921
    MOV ECX,dword ptr [EDX + 0x74]      ; 0050f924
    MOV dword ptr [EAX + 0x74],ECX      ; 0050f927
    MOV ECX,dword ptr [EDX + 0x78]      ; 0050f92a
    MOV dword ptr [EAX + 0x78],ECX      ; 0050f92d
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0050f930
    MOV dword ptr [EAX + 0x7c],EDX      ; 0050f933
    POP EDI                             ; 0050f936
    POP ESI                             ; 0050f937
    POP EBX                             ; 0050f938
    RET                                 ; 0050f939

