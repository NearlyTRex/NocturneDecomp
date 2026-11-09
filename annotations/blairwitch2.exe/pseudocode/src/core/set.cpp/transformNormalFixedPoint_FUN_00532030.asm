; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_transformNormalFixedPoint_FUN_00532030(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   undefined4 DAT_01d04fcc
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532030
        ;   Label: core_set.cpp_transformNormalFixedPoint_FUN_00532030
    PUSH EDI                            ; 00532031
    SUB ESP,0x18                        ; 00532032
    MOV ECX,dword ptr [ESP + 0x24]      ; 00532035
    MOV EBX,ESI                         ; 00532039
    MOV EAX,[0x01c38b9c]                ; 0053203b | DAT_01c38b9c
    MOV EDX,dword ptr [ECX]             ; 00532040
    IMUL EDX                            ; 00532042
    SHRD EAX,EDX,0x10                   ; 00532044
    MOV ESI,EAX                         ; 00532048
    MOV EDX,dword ptr [ECX + 0x4]       ; 0053204a
    MOV EAX,[0x01c38ba8]                ; 0053204d | DAT_01c38ba8
    IMUL EDX                            ; 00532052
    SHRD EAX,EDX,0x10                   ; 00532054
    MOV EDX,dword ptr [ECX + 0x8]       ; 00532058
    ADD ESI,EAX                         ; 0053205b
    MOV EAX,[0x01c38bb4]                ; 0053205d | DAT_01c38bb4
    IMUL EDX                            ; 00532062
    SHRD EAX,EDX,0x10                   ; 00532064
    MOV EDX,dword ptr [ECX]             ; 00532068
    ADD ESI,EAX                         ; 0053206a
    MOV EAX,[0x01c38ba0]                ; 0053206c | DAT_01c38ba0
    MOV dword ptr [ESP + 0xc],ESI       ; 00532071
    IMUL EDX                            ; 00532075
    SHRD EAX,EDX,0x10                   ; 00532077
    MOV ESI,EAX                         ; 0053207b
    MOV EDX,dword ptr [ECX + 0x4]       ; 0053207d
    MOV EAX,[0x01c38bac]                ; 00532080 | DAT_01c38bac
    IMUL EDX                            ; 00532085
    SHRD EAX,EDX,0x10                   ; 00532087
    MOV EDX,dword ptr [ECX + 0x8]       ; 0053208b
    ADD ESI,EAX                         ; 0053208e
    MOV EAX,[0x01c38bb8]                ; 00532090 | DAT_01c38bb8
    IMUL EDX                            ; 00532095
    SHRD EAX,EDX,0x10                   ; 00532097
    MOV EDX,dword ptr [ECX]             ; 0053209b
    ADD ESI,EAX                         ; 0053209d
    MOV EAX,[0x01c38ba4]                ; 0053209f | DAT_01c38ba4
    MOV dword ptr [ESP + 0x10],ESI      ; 005320a4
    IMUL EDX                            ; 005320a8
    SHRD EAX,EDX,0x10                   ; 005320aa
    MOV ESI,EAX                         ; 005320ae
    MOV EDX,dword ptr [ECX + 0x4]       ; 005320b0
    MOV EAX,[0x01c38bb0]                ; 005320b3 | DAT_01c38bb0
    IMUL EDX                            ; 005320b8
    SHRD EAX,EDX,0x10                   ; 005320ba
    MOV EDX,dword ptr [ECX + 0x8]       ; 005320be
    ADD ESI,EAX                         ; 005320c1
    MOV EAX,[0x01c38bbc]                ; 005320c3 | DAT_01c38bbc
    IMUL EDX                            ; 005320c8
    SHRD EAX,EDX,0x10                   ; 005320ca
    MOV EDX,dword ptr [ESP + 0xc]       ; 005320ce
    ADD ESI,EAX                         ; 005320d2
    MOV EAX,[0x01d04fb8]                ; 005320d4 | DAT_01d04fb8
    IMUL EDX                            ; 005320d9
    SHRD EAX,EDX,0x10                   ; 005320db
    MOV EDX,dword ptr [ESP + 0x10]      ; 005320df
    MOV ECX,EAX                         ; 005320e3
    MOV EAX,[0x01d04fc4]                ; 005320e5 | DAT_01d04fc4
    IMUL EDX                            ; 005320ea
    SHRD EAX,EDX,0x10                   ; 005320ec
    MOV EDX,ESI                         ; 005320f0
    ADD ECX,EAX                         ; 005320f2
    MOV EAX,[0x01d04fd0]                ; 005320f4 | DAT_01d04fd0
    IMUL EDX                            ; 005320f9
    SHRD EAX,EDX,0x10                   ; 005320fb
    ADD ECX,EAX                         ; 005320ff
    MOV dword ptr [ESP + 0x14],ESI      ; 00532101
    MOV dword ptr [ESP],ECX             ; 00532105
    MOV EDX,dword ptr [ESP + 0xc]       ; 00532108
    MOV EAX,[0x01d04fbc]                ; 0053210c | DAT_01d04fbc
    IMUL EDX                            ; 00532111
    SHRD EAX,EDX,0x10                   ; 00532113
    MOV EDX,dword ptr [ESP + 0x10]      ; 00532117
    MOV ECX,EAX                         ; 0053211b
    MOV EAX,[0x01d04fc8]                ; 0053211d | DAT_01d04fc8
    IMUL EDX                            ; 00532122
    SHRD EAX,EDX,0x10                   ; 00532124
    MOV EDX,ESI                         ; 00532128
    ADD ECX,EAX                         ; 0053212a
    MOV EAX,[0x01d04fd4]                ; 0053212c | DAT_01d04fd4
    IMUL EDX                            ; 00532131
    SHRD EAX,EDX,0x10                   ; 00532133
    MOV EDX,dword ptr [ESP + 0xc]       ; 00532137
    ADD ECX,EAX                         ; 0053213b
    MOV EAX,[0x01d04fc0]                ; 0053213d | DAT_01d04fc0
    MOV dword ptr [ESP + 0x4],ECX       ; 00532142
    IMUL EDX                            ; 00532146
    SHRD EAX,EDX,0x10                   ; 00532148
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053214c
    MOV ECX,EAX                         ; 00532150
    MOV EAX,[0x01d04fcc]                ; 00532152 | DAT_01d04fcc
    IMUL EDX                            ; 00532157
    SHRD EAX,EDX,0x10                   ; 00532159
    MOV EDX,ESI                         ; 0053215d
    ADD ECX,EAX                         ; 0053215f
    MOV EAX,[0x01d04fd8]                ; 00532161 | DAT_01d04fd8
    MOV EDI,EBX                         ; 00532166
    IMUL EDX                            ; 00532168
    SHRD EAX,EDX,0x10                   ; 0053216a
    ADD ECX,EAX                         ; 0053216e
    MOV ESI,ESP                         ; 00532170
    MOV dword ptr [ESP + 0x8],ECX       ; 00532172
    MOVSD ES:EDI,ESI                    ; 00532176
    MOVSD ES:EDI,ESI                    ; 00532177
    MOVSD ES:EDI,ESI                    ; 00532178
    MOV EAX,EBX                         ; 00532179
    ADD ESP,0x18                        ; 0053217b
    POP EDI                             ; 0053217e
    POP EBX                             ; 0053217f
    RET                                 ; 00532180

