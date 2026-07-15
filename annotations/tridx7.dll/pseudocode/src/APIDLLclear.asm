; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLclear(void)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   APIDLLsetVideoMode at 10002afe
;
; Referenced Globals:
;   undefined4 DAT_10014174
;   undefined4 DAT_10014178
;   undefined4 DAT_10014180
;   undefined4 DAT_10014204
;   undefined4 DAT_102268e8
;   undefined4 DAT_10226908
;
; Called Functions:
;   APIDLLdrawPolygon
;
; *****************************************************************************

section .text

    SUB ESP,0xc0                        ; 10004840
        ;   Label: APIDLLclear
    XOR EDX,EDX                         ; 10004846
    CMP dword ptr [0x10014204],EDX      ; 10004848 | DAT_10014204
    PUSH EDI                            ; 1000484e
    JZ 0x100048d0                       ; 1000484f
        ;   XREF to: 100048d0 (CONDITIONAL_JUMP)  ; LAB_100048d0
    LEA EDI,[ESP + 0x4]                 ; 10004851
    XOR EAX,EAX                         ; 10004855
    MOV ECX,0x30                        ; 10004857
    STOSD.REP ES:EDI                    ; 1000485c
    MOV EAX,[0x10014174]                ; 1000485e | DAT_10014174
    MOV dword ptr [ESP + 0x14],EDX      ; 10004863
    SHL EAX,0x10                        ; 10004867
    MOV dword ptr [ESP + 0x18],EDX      ; 1000486a
    MOV dword ptr [ESP + 0x44],EAX      ; 1000486e
    MOV dword ptr [ESP + 0x48],EDX      ; 10004872
    MOV ECX,dword ptr [0x10226908]      ; 10004876 | DAT_10226908
    MOV dword ptr [ESP + 0x74],EAX      ; 1000487c
    MOV EAX,[0x10014178]                ; 10004880 | DAT_10014178
    SHL EAX,0x10                        ; 10004885
    MOV dword ptr [ESP + 0x78],EAX      ; 10004888
    MOV dword ptr [ESP + 0xa4],EDX      ; 1000488c
    MOV dword ptr [ESP + 0xa8],EAX      ; 10004893
    MOV EAX,dword ptr [ECX]             ; 1000489a
    MOV dword ptr [ESP + 0xc],EAX       ; 1000489c
    MOV EAX,dword ptr [ECX]             ; 100048a0
    MOV dword ptr [ESP + 0x3c],EAX      ; 100048a2
    MOV EAX,dword ptr [ECX]             ; 100048a6
    MOV dword ptr [ESP + 0x6c],EAX      ; 100048a8
    PUSH 0x10                           ; 100048ac
    MOV EAX,dword ptr [ECX]             ; 100048ae
    PUSH 0x4                            ; 100048b0
    MOV ECX,dword ptr [0x102268e8]      ; 100048b2 | DAT_102268e8
    MOV dword ptr [ESP + 0xa4],EAX      ; 100048b8
    MOV dword ptr [ECX],EDX             ; 100048bf
    LEA EDX,[ESP + 0xc]                 ; 100048c1
    PUSH EDX                            ; 100048c5
    CALL APIDLLdrawPolygon              ; 100048c6
        ;   XREF to: 10004380 (UNCONDITIONAL_CALL)  ; int APIDLLdrawPolygon(SRenderVertex * vertices, int vertex_count, int render_flags) | Ordinal_13
    ADD ESP,0xc                         ; 100048cb
    JMP 0x10004901                      ; 100048ce
        ;   XREF to: 10004901 (UNCONDITIONAL_JUMP)  ; LAB_10004901
    LEA EDI,[ESP + 0x4]                 ; 100048d0
        ;   Label: LAB_100048d0
    XOR EAX,EAX                         ; 100048d4
    MOV ECX,0x19                        ; 100048d6
    STOSD.REP ES:EDI                    ; 100048db
    MOV dword ptr [ESP + 0x4],0x64      ; 100048dd
    LEA EAX,[ESP + 0x4]                 ; 100048e5
    MOV ECX,dword ptr [0x10014180]      ; 100048e9 | DAT_10014180
    PUSH EAX                            ; 100048ef
    PUSH 0x1000400                      ; 100048f0
    PUSH 0x0                            ; 100048f5
    MOV EAX,dword ptr [ECX]             ; 100048f7
    PUSH 0x0                            ; 100048f9
    PUSH 0x0                            ; 100048fb
    PUSH ECX                            ; 100048fd
    CALL dword ptr [EAX + 0x14]         ; 100048fe
    MOV EAX,0x1                         ; 10004901
        ;   Label: LAB_10004901
    POP EDI                             ; 10004906
    ADD ESP,0xc0                        ; 10004907
    RET                                 ; 1000490d

